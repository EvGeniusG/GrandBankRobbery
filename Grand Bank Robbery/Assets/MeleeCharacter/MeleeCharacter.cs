using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeleeCharacter : Character
{
    public Animator Anim;
    public float HitRadius;
    Vector3 previousPosition;
    public float LegsAnimationSpeed;
    protected override void Awake()
    {
        base.Awake();
        previousPosition = transform.position;
    }


    protected override void FixedUpdate()
    {
        base.FixedUpdate();
        Anim.SetFloat("Speed",  agent.desiredVelocity.magnitude * LegsAnimationSpeed); //(previousPosition - transform.position).magnitude
        if (Joystick.Direction.magnitude == 0)
        {
            Anim.SetBool("Move", false);
        }
        else
        {
            Anim.SetBool("Move", true);
        }

        var ObjectsAround = Physics.OverlapSphere(transform.position, HitRadius);
        bool Hit = false;
        for(int i = 0; i < ObjectsAround.Length; i++)
        {
            if(Mathf.Abs(Vector3.Angle(transform.forward, ObjectsAround[i].transform.position - transform.position)) < 90 && ObjectsAround[i].GetComponent<Destroyable>() != null)
            {
                Hit = true;
                break;
            }
        }
        Anim.SetLayerWeight(1, Hit ? 1 : 0);
        Anim.SetBool("Hit", Hit);
        previousPosition = transform.position;
    }
    public override void PutOffControl()
    {
        base.PutOffControl();
        Anim.SetBool("Move", false);
        //Добавить анимацию конца
    }
}
