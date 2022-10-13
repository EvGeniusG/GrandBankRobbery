using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour, Destroyable
{
    public void DealDamage(int damage, Vector3 pointDamage)
    {
        throw new System.NotImplementedException();
    }
    public Transform GetTransform() => transform;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
