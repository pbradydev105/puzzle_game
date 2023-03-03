using UnityEngine;
using UnityEngine.UI;

public class LoginManager : MonoBehaviour
{
    [Header("InputFields")]
    [SerializeField] private InputField UserNameFieldInput;
    
    [Header("Text")]
    [SerializeField] private GameObject WarningTxt;
    
    public void OnSignUpBtnClick()
    {
        Debug.Log("SignUp");
    }

    public void OnSignInBtnClick()
    {
        if (UserNameFieldInput.text == "")
        {
            WarningTxt.SetActive(true);
        }
        else
        {
            GameManager.instance.ChangeScene("MainMenu");
        }
    }
}
