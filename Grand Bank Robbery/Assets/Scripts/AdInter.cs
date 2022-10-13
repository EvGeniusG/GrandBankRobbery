using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;
using GameAnalyticsSDK;

public class AdInter : MonoBehaviour, IInterstitialAdListener
{
    const string key = "f65b9f288f282586d9cb47d25179f00eeef3655b4e44b435";
    
    void Start()
    {
        Appodeal.initialize(key, Appodeal.INTERSTITIAL);
        GameAnalytics.Initialize();
    }

    public static void ShowAd()
    {
        if (!Appodeal.isLoaded(Appodeal.INTERSTITIAL))
            return;

        int AL = PlayerPrefs.GetInt("Session") - 1;
        if (AL % 2 == 0 && AL != 0)
        {
            GameAnalytics.NewAdEvent(GAAdAction.Show, GAAdType.Interstitial, "Appodeal", "Between levels");
            Appodeal.show(Appodeal.INTERSTITIAL);
        }
    }
    public static void ShowAdImmediately()
    {
        if (Appodeal.isLoaded(Appodeal.INTERSTITIAL))
        {
            GameAnalytics.NewAdEvent(GAAdAction.Show, GAAdType.Interstitial, "Appodeal", "Restart");
            Appodeal.show(Appodeal.INTERSTITIAL);
        }
            
    }

    public void onInterstitialLoaded(bool isPrecache)
    {

    }

    public void onInterstitialFailedToLoad()
    {
        
    }

    public void onInterstitialShowFailed()
    {
        
    }

    public void onInterstitialShown()
    {
        
    }

    public void onInterstitialClosed()
    {
        
    }

    public void onInterstitialClicked()
    {
        throw new System.NotImplementedException();
    }

    public void onInterstitialExpired()
    {
        throw new System.NotImplementedException();
    }
}
