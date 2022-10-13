using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraBehaviour : MonoBehaviour
{
    
    public float DistanceUp, DistanceBack, Speed;
    public Vector3 PlayerAngles, MenuAngles;
    //public Transform MenuPosition;
    public float RotSpeed;
    public CameraState State;
    public static CameraBehaviour Instance { get; private set; }
    private void Awake()
    {
        Instance = this;
    }
    private void LateUpdate()
    {
        Vector3 camPos;
        RaycastHit hit;
        switch (State)
        {
            case CameraState.Menu:

                break;
            case CameraState.GamePlay:
                camPos = Character.Instance.transform.position;
                camPos.y += DistanceUp;
                
                if (Physics.Raycast(camPos, Vector3.back, out hit, DistanceBack))
                {
                    camPos = hit.point;
                }
                else
                {
                    camPos.z -= DistanceBack;
                }
                camPos.y += DistanceUp;
                if (Vector3.Distance(camPos, transform.position) < Speed * Time.deltaTime)
                {
                    transform.position = camPos;
                }
                else
                {
                    transform.Translate((camPos - transform.position).normalized * Speed * Time.deltaTime, Space.World);
                }
                if(Vector3.Distance(PlayerAngles, transform.eulerAngles) < RotSpeed * Time.deltaTime)
                {
                    transform.eulerAngles = PlayerAngles;
                }
                else
                {
                    transform.Rotate((PlayerAngles - transform.eulerAngles).normalized * RotSpeed * Time.deltaTime);
                }
                break;
            case CameraState.Final:
                camPos = Character.Instance.transform.position;
                camPos.y += DistanceUp;
                if (Physics.Raycast(camPos, Vector3.back, out hit, DistanceBack * 2))
                {
                    camPos = hit.point;
                }
                else
                {
                    camPos.z -= DistanceBack;
                }
                camPos.y += DistanceUp * 3;
                if (Vector3.Distance(camPos, transform.position) < Speed * Time.deltaTime)
                {
                    transform.position = camPos;
                }
                else
                {
                    transform.Translate((camPos - transform.position).normalized * Speed * Time.deltaTime, Space.World);
                }
                if (Vector3.Distance(PlayerAngles, transform.eulerAngles) < RotSpeed * Time.deltaTime)
                {
                    transform.eulerAngles = PlayerAngles;
                }
                else
                {
                    transform.Rotate((PlayerAngles - transform.eulerAngles).normalized * RotSpeed * Time.deltaTime);
                }
                break;

        }
        
        
    }
}

public enum CameraState
{
    Menu = 0,
    GamePlay = 1,
    Final = 2
}
