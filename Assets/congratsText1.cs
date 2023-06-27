using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class congratsText1 : MonoBehaviour
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
            gameObject.transform.position = new Vector3(14.22f, 5.83f, -10.63f);
		}
    }
}
