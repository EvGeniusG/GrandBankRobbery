using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HitDetector : MonoBehaviour
{
   // public MeleeCharacter Character;
    public List<Destroyable> Hitted;
    public Collider Coll;
    public Transform COM;
    public AudioSource AS;
    private void OnEnable()
    {
        Hitted = new List<Destroyable>();
        Coll.enabled = true;
        AS.Play();
    }

    private void OnTriggerEnter(Collider other)
    {
        var newHitted = other.GetComponent<Destroyable>();
        if (newHitted != null)
        {
            //Hitted.Add(newHitted);
            newHitted.DealDamage(Character.Instance.Damage, COM.position);
        }
    }
    private void OnDisable()
    {
        Coll.enabled = false;
    }

    bool DestroyableInList(Destroyable newHitted)
    {
        for(int i = 0; i < Hitted.Count; i++)
        {
            if(Hitted[i] == newHitted)
            {
                return true;
            }
        }
        return false;
    }
}
