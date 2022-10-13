using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public abstract class Character : MonoBehaviour
{
    public int Speed;
    protected NavMeshAgent agent;
    //CharacterController CC;
    public Joystick Joystick;
    public int Damage;
    protected Rigidbody rb;
    public static Character Instance { get; private set; }
    protected virtual void Awake()
    {
        //CC = GetComponent<CharacterController>();
        agent = GetComponent<NavMeshAgent>();
        agent.speed = Speed;
        //Joystick = FindObjectOfType<Joystick>();
        rb = GetComponent<Rigidbody>();
    }
    protected virtual void OnEnable()
    {
        Instance = this;
    }
    
    protected virtual void FixedUpdate()
    {
        rb.velocity = Vector3.zero;
        //CC.Move(new Vector3(Joystick.Horizontal, 0, Joystick.Vertical) * Speed * Time.fixedDeltaTime);
        //transform.LookAt(new Vector3(transform.position.x + Joystick.Horizontal, transform.position.y, transform.position.z + Joystick.Vertical));
        //rb.MovePosition(transform.position + new Vector3(Joystick.Horizontal, 0, Joystick.Vertical) * Speed * Time.fixedDeltaTime);
        agent.SetDestination(new Vector3(transform.position.x + Joystick.Horizontal, transform.position.y, transform.position.z + Joystick.Vertical));
    }
    public virtual void PutOffControl()
    {
        agent.enabled = false;
        rb.isKinematic = true;
        enabled = false;
    }
}
