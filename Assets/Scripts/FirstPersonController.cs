using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FirstPersonController : MonoBehaviour
{

    private bool isGrabbing = false;
    private Rigidbody grabbedObject;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (isGrabbing && grabbedObject != null)
        {
            // Move the grabbed object along with the VR controller
            grabbedObject.MovePosition(transform.position); // Change to make child of controller --> workaround
            grabbedObject.MoveRotation(transform.rotation);
        }

        if (GameManager.points >= 100)
        {
            GameManager.instance.onFinishLevel();
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.transform.tag == "Cube")
        {
            GameManager.points += 10;
            Debug.Log("POINTS: " + GameManager.points);
        }
        else if (collision.gameObject.transform.tag == "Sphere")
		{
            GameManager.points += 20;
            Debug.Log("POINTS: " + GameManager.points);
		}
    }

    public void GrabObject(Rigidbody objectToGrab)
    {
        if (!isGrabbing)
        {
            isGrabbing = true;
            grabbedObject = objectToGrab;
        }
    }

    public void ReleaseObject()
    {
        if (isGrabbing)
        {
            isGrabbing = false;
            grabbedObject = null;
        }
    }
}
