using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectInteraction : MonoBehaviour
{
    private FirstPersonController grabber; // Reference to the ObjectGrabber script

    private void Start()
    {
        grabber = GetComponent<FirstPersonController>();
    }

    private void OnTriggerEnter(Collider other)
    {
        Rigidbody objectRigidbody = other.GetComponent<Rigidbody>();
        if (objectRigidbody != null)
        {
            grabber.GrabObject(objectRigidbody);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        Rigidbody objectRigidbody = other.GetComponent<Rigidbody>();
        if (objectRigidbody != null)
        {
            grabber.ReleaseObject();
        }
    }
}
