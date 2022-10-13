using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
public class Timer : MonoBehaviour
{
    public TextMeshProUGUI Table;
    public int StartTimer;
    float TimeCounter;
    void Awake()
    {
        TimeCounter = StartTimer + PlayerPrefs.GetInt("AdditionalTime");
        Table.text = Mathf.FloorToInt(TimeCounter) + "s";
    }

    
    void FixedUpdate()
    {
        TimeCounter -= Time.fixedDeltaTime;
        Table.text = Mathf.FloorToInt(TimeCounter) + "s";
        if(TimeCounter < 0)
        {
            GamePlay.Instance.ExitPlay();
        }
    }
}
