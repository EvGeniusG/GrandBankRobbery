using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Music : MonoBehaviour
{
    public GameObject OnImage;
    bool On;
    public AudioSource AS;
    void Awake()
    {
        On = PlayerPrefs.GetInt("Music", 1) == 1;
        if (On)
        {
            AS.mute = false;
            OnImage.SetActive(true);
        }
        else
        {
            AS.mute = true;
            OnImage.SetActive(false);
        }
    }

    public void Switch()
    {
        On = !On;
        PlayerPrefs.SetInt("Music", On ? 1 : 0);
        if (On)
        {
            AS.mute = false;
            OnImage.SetActive(true);
        }
        else
        {
            AS.mute = true;
            OnImage.SetActive(false);
        }
    }

    
}
