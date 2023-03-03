using UnityEngine;

public class PixelGrid : MonoBehaviour
{

    public Pixel[] pixels { get; private set; }

    public int size;
    public int height;
    public int width;

    private void Awake()
    {
        pixels = GetComponentsInChildren<Pixel>();

        size = pixels.Length;
        height = 12;
        width = Mathf.FloorToInt(size / height);
    }

    private void Start()
    {
        for (int index = 0; index < pixels.Length; index++)
        {
            var x = index % width;
            var y = index / height;
            pixels[index].coordinates = new Vector2Int(x, y);
        }
    }
}