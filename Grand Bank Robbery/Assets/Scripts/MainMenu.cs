using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class MainMenu : MonoBehaviour
{
    public GameObject[] Characters;
    public int[] CharacterPrice;
    int ActualCharacter;
    public Animator anim;
    public GameObject ChooseButton, Lock;
    public TextMeshProUGUI Price;
    public GameObject Menu, Choosing;
    public static MainMenu Instance { get; private set; }
    private void Awake()
    {
        Instance = this;
        ActualCharacter = PlayerPrefs.GetInt("ActualCharacter", 0);
        Characters[ActualCharacter].SetActive(true);
    }
    public void Play()
    {
        anim.SetBool("Menu", false);
        GamePlay.Instance.PlayMode();
        CameraBehaviour.Instance.State = CameraState.GamePlay;
    }
    public void NextCharacter()
    {
        Characters[ActualCharacter].SetActive(false);
        ActualCharacter++;
        if(ActualCharacter >= Characters.Length)
        {
            ActualCharacter = 0;
        }
        if(PlayerPrefs.HasKey("Character" + ActualCharacter) || ActualCharacter == 0)
        {
            Lock.SetActive(false);
            ChooseButton.SetActive(true);
            PlayerPrefs.SetInt("ActualCharacter", ActualCharacter);
        }
        else
        {
            Lock.SetActive(true);
            ChooseButton.SetActive(false);
            Price.text = CharacterPrice[ActualCharacter].ToString();
        }
        Characters[ActualCharacter].SetActive(true);
    }
    public void UnlockCharacter()
    {
        Lock.SetActive(false);
        ChooseButton.SetActive(true);
        PlayerPrefs.SetInt("ActualCharacter", ActualCharacter);
    }
    public void PreviousCharacter()
    {
        Characters[ActualCharacter].SetActive(false);
        ActualCharacter--;
        if (ActualCharacter < 0)
        {
            ActualCharacter = Characters.Length - 1;
        }
        if (PlayerPrefs.HasKey("Character" + ActualCharacter) || ActualCharacter == 0)
        {
            Lock.SetActive(false);
            ChooseButton.SetActive(true);
            PlayerPrefs.SetInt("ActualCharacter", ActualCharacter);
        }
        else
        {
            Lock.SetActive(true);
            ChooseButton.SetActive(false);
            Price.text = CharacterPrice[ActualCharacter].ToString();
        }
        Characters[ActualCharacter].SetActive(true);
    }
    public void BuyCharacter()
    {
        int CharacterNumber = ActualCharacter;
        if (TotalBucks.Instance.TotalMoney >= CharacterPrice[CharacterNumber])
        {
            PlayerPrefs.SetInt("Character" + CharacterNumber, 1);
            TotalBucks.Instance.TotalMoney -= CharacterPrice[CharacterNumber];
            PlayerPrefs.SetInt("TotalMoney", TotalBucks.Instance.TotalMoney);
            TotalBucks.Instance.Balance.text = TotalBucks.Instance.TotalMoney.ToString();

            Lock.SetActive(false);
            ChooseButton.SetActive(true);
            PlayerPrefs.SetInt("ActualCharacter", ActualCharacter);
        }
        else
        {
            TotalBucks.Instance.MoneyAnimation.SetTrigger("NoMoney");
        }
    }
    public void GoToChoose()
    {
        Menu.SetActive(false);
        Choosing.SetActive(true);
    }

    public void GoToMenu()
    {
        Choosing.SetActive(false);
        Menu.SetActive(true);
    }
}
