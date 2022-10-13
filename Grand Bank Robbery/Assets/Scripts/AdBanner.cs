using UnityEngine;
using AppodealAds.Unity.Api;
using AppodealAds.Unity.Common;

public class AdBanner : MonoBehaviour, IBannerAdListener
{
    const string key = "f65b9f288f282586d9cb47d25179f00eeef3655b4e44b435";

    public void onBannerClicked()
    {
        
    }

    public void onBannerExpired()
    {
        
    }

    public void onBannerFailedToLoad()
    {
        
    }

    public void onBannerLoaded(int height, bool isPrecache)
    {
        
    }

    public void onBannerShown()
    {
        
    }

    void Start()
    {
        Appodeal.initialize(key, Appodeal.BANNER_BOTTOM);
        Appodeal.show(Appodeal.BANNER_BOTTOM);
    }

}
