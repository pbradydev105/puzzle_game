using System;
using UnityEngine;

public class MainMenuHandler : MonoBehaviour
{
    public static MainMenuHandler instance;
    
    [SerializeField] private GameObject MidLayerPanel;
    [SerializeField] private GameObject BottomLayerPanel;
    [SerializeField] private GameObject MenuPanel;
    [SerializeField] private GameObject SettingPanel;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
    }

    public void OpenMenuPanel()
    {
        MenuPanel.SetActive(true);
        MidLayerPanel.SetActive(true);
        BottomLayerPanel.SetActive(true);
        SettingPanel.SetActive(false);
    }
    public void CloseMenuPanel()
    {
        MenuPanel.SetActive(false);
    }
    public void OpenSettingPanel()
    {
        SettingPanel.SetActive(true);
        MidLayerPanel.SetActive(false);
        BottomLayerPanel.SetActive(false);
        MenuPanel.SetActive(false);
    }
    public void OnSettingPanelClose()
    {
        MidLayerPanel.SetActive(true);
        BottomLayerPanel.SetActive(true);
    }
    public void OnTilesBtnClick()
    {
        GameManager.instance.ChangeScene("ModeSelection");
    }
}
