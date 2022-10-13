using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameAnalyticsSDK;
public class GamePlay : MonoBehaviour
{
    
    public static GamePlay Instance { get; private set; }

    public Animator anim;
    int SessionNumber;
    void Awake()
    {
        Instance = this;
        SessionNumber = PlayerPrefs.GetInt("Session", 0);
    }

    public void PlayMode()
    {
        anim.SetBool("Play", true);
        foreach(var OfficeMan in FindObjectsOfType<OfficeMan>())
        {
            OfficeMan.GetScared();
        }
        GameAnalytics.NewProgressionEvent(GAProgressionStatus.Start, "Session " + SessionNumber);
    }
    public void ExitPlay()
    {
        anim.SetBool("Play", false);
        CameraBehaviour.Instance.State = CameraState.Final;
        Joystick.Instance.ResetInput();
        Character.Instance.PutOffControl();
        Final.Instance.ActivateFinal();

        GameAnalytics.NewProgressionEvent(GAProgressionStatus.Complete, "Session " + SessionNumber);
        PlayerPrefs.SetInt("Session", SessionNumber + 1);
    }
}
