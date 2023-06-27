using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shoppingScript : MonoBehaviour
{
    public GameObject basket;
    public float distance; 
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Vector3.Distance(basket.transform.position, gameObject.transform.position) < distance)
		{
            gameObject.SetActive(false);
            GameManager.points += 10;
		}
    }
}
