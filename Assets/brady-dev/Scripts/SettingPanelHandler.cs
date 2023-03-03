using System;
using UnityEngine;
using UnityEngine.UI;

public class SettingPanelHandler : MonoBehaviour
{
    [Header("InputFields")]
    [SerializeField] private InputField UserNameFieldInput;
    
    [Header("Text")]
    [SerializeField] private GameObject WarningTxt;

    private void OnEnable()
    {
        UserNameFieldInput.text = "";
        WarningTxt.SetActive(false);
    }

    public void OnUpdateSettingBtnClick()
    {
        if (UserNameFieldInput.text == "")
        {
            WarningTxt.SetActive(true);
        }
        else
        {
            CloseSettingBtnClick();
        }
    }

    public void CloseSettingBtnClick()
    {
        gameObject.SetActive(false);
        MainMenuHandler.instance.OnSettingPanelClose();
    }
}
