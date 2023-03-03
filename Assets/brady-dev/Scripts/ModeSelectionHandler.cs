using UnityEngine;
using UnityEngine.UI;

public class ModeSelectionHandler : MonoBehaviour
{
    [SerializeField] private Image[] DifficultyBtnImags;
    [SerializeField] private Image[] PixelBtnImags;
    [SerializeField] private Sprite RadioSelectedImg;
    [SerializeField] private Sprite RadioUnSelectedImg;
    
    public void OnDifficultyBtnClick(int index)
    {
        for (int i = 0; i < DifficultyBtnImags.Length; i++)
        {
            DifficultyBtnImags[i].overrideSprite = RadioUnSelectedImg;
        }
        DifficultyBtnImags[index].overrideSprite = RadioSelectedImg;
    }
    public void OnPixelBtnClick(int index)
    {
        for (int i = 0; i < PixelBtnImags.Length; i++)
        {
            PixelBtnImags[i].overrideSprite = RadioUnSelectedImg;
        }
        PixelBtnImags[index].overrideSprite = RadioSelectedImg;
    }
    public void OnContinueBtnClick()
    {
        GameManager.instance.ChangeScene("Loading");
    }
}
