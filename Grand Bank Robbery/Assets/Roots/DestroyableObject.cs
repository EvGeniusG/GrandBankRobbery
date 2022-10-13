using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyableObject : MonoBehaviour, Destroyable
{
    public GameObject frags;
    public void DealDamage(int damage, Vector3 pointDamage)
    {
        var newFrags = Instantiate(frags, transform.position, transform.rotation);
        newFrags.transform.localScale = transform.localScale;
        var roots = newFrags.GetComponentsInChildren<Rigidbody>();
        for(int i = 0; i < roots.Length; i++)
        {
            roots[i].AddExplosionForce(roots[i].mass * 750, pointDamage, 5);
        }
        Destroy(gameObject);
    }
    public Transform GetTransform() => transform;
}
