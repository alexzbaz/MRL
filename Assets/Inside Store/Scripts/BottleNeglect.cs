using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BottleNeglect : MonoBehaviour
{
   private void OnCollisionEnter(Collision collision)
    {
        // Check if the colliding object has a specific tag
        if (collision.gameObject.CompareTag("Player"))
        {
            // Display a negative message when touching the object
            Debug.Log("Please don't touch it. Try again and choose an alternative product!");
        }
    }   
}
