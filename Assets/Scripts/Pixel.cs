using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pixel : MonoBehaviour
{
    public PixelState state { get; set; }

    public Vector2Int coordinates { get; set; }

    public void OnClick()
    {
        Debug.Log("x: " + coordinates.x + " y: " + coordinates.y);
    }
}
