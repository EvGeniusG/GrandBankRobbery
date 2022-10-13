using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangeCharacter : Character
{
    Vector3 previousPosition;
    public Animator Anim;
    public float ShootDistance;
    public Transform bulletSpawn;
    public GameObject Bullet;
    Transform target;
    bool Shooting = false;
    public float TimeBeforeFire, TimeAfterFire, TimeBetweenShoots;
    public int ShootsCount;
    Coroutine ShootingRoutine = null;
    protected override void Awake()
    {
        base.Awake();
        previousPosition = transform.position;
    }

    protected override void FixedUpdate()
    {
        base.FixedUpdate();
        if (Joystick.Direction.magnitude == 0)
        {
            Anim.SetBool("Move", false);
            if(target != null)
            {
                Anim.SetBool("Shoot", true);
                ShootingRoutine = StartCoroutine(Shoot());
            }
            else
            {
                target = FindNewTarget();
                Anim.SetBool("Shoot", false);
                Shooting = false;
            }

        }
        else
        {
            Anim.SetBool("Move", true);
        }
    }
    IEnumerator Shoot()
    {
        if (!Shooting)
        {
            Shooting = true;
            yield return new WaitForSeconds(TimeBeforeFire);
            if (Joystick.Direction.magnitude == 0)
            {
                Instantiate(Bullet, bulletSpawn.position, bulletSpawn.rotation);
            }
            else
            {
                Shooting = false;
                StopCoroutine(ShootingRoutine);
            }
            for (int i = 1; i < ShootsCount; i++)
            {
                yield return new WaitForSeconds(TimeBetweenShoots);
                if (Joystick.Direction.magnitude == 0)
                {
                    Instantiate(Bullet, bulletSpawn.position, bulletSpawn.rotation);
                }
                else
                {
                    Shooting = false;
                    StopCoroutine(ShootingRoutine);
                }
            }
            yield return new WaitForSeconds(TimeAfterFire);
            Shooting = false;
        }
        
    }

    Transform FindNewTarget()
    {
        var ObjectsAround = Physics.OverlapSphere(transform.position, ShootDistance);
        Destroyable target = null;
        for (int i = 0; i < ObjectsAround.Length; i++)
        {
            var newTarget = ObjectsAround[i].GetComponent<Destroyable>();
            if (newTarget != null)
            {
                if (target as Enemy == null)
                {
                    if (target.GetType() == typeof(Enemy))
                    {
                        if (newTarget.GetType() == typeof(Enemy) &&
                            Vector3.Distance(transform.position, newTarget.GetTransform().position) < Vector3.Distance(transform.position, target.GetTransform().position))
                        {
                            RaycastHit hit;
                            Physics.Raycast(bulletSpawn.position, newTarget.GetTransform().position, out hit);
                            if (hit.collider.GetComponent<Enemy>() != null)
                            {
                                target = newTarget;
                            }
                        }
                    }
                    else
                    {
                        if (Vector3.Distance(transform.position, newTarget.GetTransform().position) < Vector3.Distance(transform.position, target.GetTransform().position))
                        {
                            RaycastHit hit;
                            Physics.Raycast(bulletSpawn.position, newTarget.GetTransform().position, out hit);
                            if (hit.collider.GetComponent<Destroyable>() != null)
                            {
                                target = newTarget;
                            }
                        }
                    }
                }
            }
        }
        if(target == null)
        {
            return null;
        }
        return target.GetTransform();
    }
}
