using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OfficeMan : DestroyableObject
{
    public Animator anim;
    public void GetScared()
    {
        anim.SetBool("Scared", true);
    }
}
