using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThrowingController : MonoBehaviour
{
    private bool isBeingDragged = false;
    private Vector3 initialPosition;
    private Rigidbody rb;
    private Camera myCamera;
    
    private void Start()
    {
        rb = GetComponent<Rigidbody>();

         myCamera = Camera.main; // Assign the main camera
        if (myCamera == null)
        {
            Debug.LogError("No main camera found in the scene!");
        }
    }

    private void OnMouseDown()
    {
        isBeingDragged = true;
        initialPosition = transform.position;
        rb.isKinematic = true;
    }

    private void OnMouseUp()
    {
        if (isBeingDragged)
        {
            isBeingDragged = false;
            rb.isKinematic = false;
        }
    }

    private void OnMouseDrag()
    {
        if (isBeingDragged && rb != null) // Add a null check for rb
        {
            Vector3 mousePosition = Input.mousePosition;
            mousePosition.z = myCamera.WorldToScreenPoint(transform.position).z;
            Vector3 newPosition = myCamera.ScreenToWorldPoint(mousePosition);
            rb.MovePosition(newPosition);
        } 
        else
        {
            Debug.LogError("No main camera found in the scene!");
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        // Check if the garbage has entered the trigger collider of the dustbin
        if (other.CompareTag("Trash_apt_01"))
        {
            // Perform actions when the garbage enters the dustbin
            // Example: Increase score, play sound, etc.
            Debug.Log("Garbage thrown into the dustbin!");
        }
    }
}
 