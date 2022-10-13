using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;
public class Final : MonoBehaviour
{
    public static Final Instance { get; private set; }
    public Animator anim;
    public TextMeshProUGUI FinalBalance;
    void Awake()
    {
        Instance = this;
    }
    
    public void ActivateFinal()
    {
        PlayerPrefs.SetInt("TotalMoney", PlayerPrefs.GetInt("TotalMoney", 0) + GameBalance.Instance.Money);
        FinalBalance.text = GameBalance.Instance.Money.ToString();
        anim.SetBool("Final", true);
    }

    public void ContinueButton()
    {
        SceneManager.LoadScene(0);
    }
}
