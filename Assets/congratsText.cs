using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class congratsText : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (GameManager.points >= 50)
		{
            gameObject.transform.position = new Vector3(26.481f, 1.538f, 13.192f);
		}
    }
}
