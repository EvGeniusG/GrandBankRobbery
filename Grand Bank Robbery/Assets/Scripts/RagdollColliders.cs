using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RagdollColliders : MonoBehaviour
{
    private void Awake()
    {
        Collider coll = FindObjectOfType<Character>().GetComponent<Collider>();
        foreach(Collider c in transform.GetComponentsInChildren<Collider>())
        {
            Physics.IgnoreCollision(c, coll);
        }
    }
}
