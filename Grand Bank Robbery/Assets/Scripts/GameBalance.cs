using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameBalance : MonoBehaviour
{
    public static GameBalance Instance { get; private set; }
    public int Money;
    public AudioSource AS;
    public TextMeshProUGUI Table;
    void Awake()
    {
        Instance = this;
        Money = 0;
        Table.text = "0";
    }

    
    public void AddMoney(int money)
    {
        AS.Play();
        Money += money;
        Table.text = Money.ToString();
    }
}
