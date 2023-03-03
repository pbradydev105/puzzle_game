using UnityEngine;
using UnityEngine.UI;

public class test : MonoBehaviour
{
    public Image[] Images;
    public Image source1;
    public Texture2D[] pieces;
    private int boxSize;
    private int CurrentImgBox;
    [SerializeField] private GameObject[] LockImgOfMainImg;
    
    [Header("BigImage")]
    [SerializeField] private Image BigImageDisplay;
    [SerializeField] private GameObject QuestionField;
    [SerializeField] private GameObject[] LockImgs;
    private int currentImageQuestion;
    private int counter;
    
    void Start()
    {
        boxSize = source1.sprite.texture.width / 3;
        BuildPieces();
    }
 
    void BuildPieces()
    {
        for( int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int index = i * 3 + j;
                pieces[index] = new Texture2D(boxSize, boxSize);
                var pixels = source1.sprite.texture.GetPixels(boxSize * i, boxSize * j,
                    boxSize, boxSize);
                // var pixels = source1.GetPixels(boxSize* i,boxSize*j , boxSize,boxSize);
                pieces[index].SetPixels(pixels);
                pieces[index].Apply();
            }
        }

        AssignThePieces();
    }
    void AssignThePieces()
    {
        for (int i = 0; i < pieces.Length; i++)
        {
            Rect rec = new Rect(0, 0, pieces[i].width, pieces[i].height);
            Vector2 pivot = new Vector2(0.5f, 0.5f);
            Images[i].sprite = Sprite.Create(pieces[i], rec, pivot);
        }
    }
    public void SelectImgToPlayFor(int index)
    {
        CurrentImgBox = index;
        BigImageDisplay.sprite = Images[index].sprite;
        BigImageDisplay.gameObject.SetActive(true);

        for (int i = 0; i < LockImgs.Length; i++)
        {
            LockImgs[i].SetActive(true);
        }
    }
    public void BackFromBigImg()
    {
        BigImageDisplay.gameObject.SetActive(false);
        QuestionField.SetActive(false);
        counter = 0;
    }
    public void GenerateQuestion(int index)
    {
        currentImageQuestion = index;
        QuestionField.SetActive(true);
    }
    public void OnCorrectAnswer()
    {
        QuestionField.SetActive(false);
        LockImgs[currentImageQuestion].SetActive(false);
        counter++;
        if (counter >= 12)
        {
            BackFromBigImg();
            LockImgOfMainImg[CurrentImgBox].SetActive(false);
        }
    }
    public void OnWrongAnswer()
    {
        QuestionField.SetActive(false);
    }
    
    
    
    
    
    
    
}
