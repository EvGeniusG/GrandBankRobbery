using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface Destroyable
{
    public void DealDamage(int damage, Vector3 pointDamage);

    public Transform GetTransform();
}
