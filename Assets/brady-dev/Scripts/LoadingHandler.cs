using UnityEngine;

public class LoadingHandler : MonoBehaviour
{
    private void Start()
    {
        Invoke("ChangeScene", 2f);
    }

    void ChangeScene()
    {
        GameManager.instance.ChangeScene("GamePlay");
    }
}
