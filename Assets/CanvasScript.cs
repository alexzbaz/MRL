using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CanvasScript : MonoBehaviour
{
    private string points;
    public TextMeshProUGUI pointsText; 
    // Start is called before the first frame update
    void Start()
    {
        points = "Points: " + GameManager.points;
        pointsText.text = points;
    }

    // Update is called once per frame
    void Update()
    {
        points = "Points: " + GameManager.points;
        pointsText.text = points;
    }
}
