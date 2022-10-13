using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class TotalBucks : MonoBehaviour
{
    public TextMeshProUGUI Balance;
    public int TotalMoney;
    public Animator MoneyAnimation;
    public static TotalBucks Instance { get; private set; }
    void Awake()
    {
        Instance = this;
        TotalMoney = PlayerPrefs.GetInt("TotalMoney", 0);
        Balance.text = TotalMoney.ToString();
    }
    
   
}
