using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class BucksDrop : MonoBehaviour
{
    public int Money;
    public float DropDistance, Speed;
    Rigidbody rb;
    Collider coll;
    bool dropActive = false;
    void Awake()
    {
        rb = GetComponent<Rigidbody>();
        coll = GetComponent<Collider>();
        StartCoroutine(ActivateDrop());
    }
    
    void FixedUpdate()
    {
        if(dropActive && Vector3.Distance(transform.position, Character.Instance.transform.position) < DropDistance)
        {
            rb.isKinematic = true;
            coll.enabled = false;
            if(Vector3.Distance(Character.Instance.transform.position, transform.position) < Speed * Time.fixedDeltaTime)
            {
                GameBalance.Instance.AddMoney(Money);
                Destroy(gameObject);
            }
            else
            {
                transform.Translate((Character.Instance.transform.position - transform.position).normalized * Speed * Time.fixedDeltaTime, Space.World);
            }
            
        }
        else
        {
            coll.enabled = true;
            rb.isKinematic = false;
        }
    }

    IEnumerator ActivateDrop()
    {
        yield return new WaitForSeconds(0.5f);
        dropActive = true;
    }
}
