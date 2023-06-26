using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class XRPlayerController : MonoBehaviour
{
    [SerializeField]
    private float speed = 10.0f;

    [SerializeField]
    private XRNode controllerNode = XRNode.LeftHand;

    [SerializeField]
    private Vector3 capsuleCenter = new Vector3(0, 1, 0);

    [SerializeField]
    private float capsuleRadius = 0.3f;

    [SerializeField]
    private float capsuleHeight = 1.6f;

    [SerializeField]
    private CapsuleDirection capsuleDirection = CapsuleDirection.YAxis;

    private InputDevice controller;

    private Rigidbody rigidbodyComponent;

    private CapsuleCollider capsuleCollider;

    private List<InputDevice> devices = new List<InputDevice>();

    public Camera vrCamera;


    public enum CapsuleDirection
	{
        XAxis,
        YAxis,
        ZAxis
	}

	private void OnEnable()
	{
        rigidbodyComponent = GetComponent<Rigidbody>();
        capsuleCollider = GetComponent<CapsuleCollider>();

        rigidbodyComponent.constraints = RigidbodyConstraints.FreezeRotation;
        capsuleCollider.direction = (int)capsuleDirection;
        capsuleCollider.radius = capsuleRadius;
        capsuleCollider.center = capsuleCenter;
        capsuleCollider.height = capsuleHeight;
	}

	// Start is called before the first frame update
	void Start()
    {
        GetDevice();
    }

    private void GetDevice()
	{
        InputDevices.GetDevicesAtXRNode(controllerNode, devices);
        controller = devices[0];
	}

    // Update is called once per frame
    void Update()
    {
        if (controller == null)
		{
            GetDevice();
		}
        UpdateMovement();

        if (GameManager.points >= 100)
        {
            GameManager.instance.onFinishLevel();
        }

        
    }

    private void UpdateMovement()
	{
        Vector2 primary2dValue;

        InputFeatureUsage<Vector2> primary2DVector = CommonUsages.primary2DAxis; // The necessary button --> according to the docs, this is the Joystick

        if (controller.TryGetFeatureValue(primary2DVector, out primary2dValue) && primary2dValue != Vector2.zero)
		{
            var xAxis = primary2dValue.x * speed * Time.deltaTime;
            var zAxis = primary2dValue.y * speed * Time.deltaTime;

            Vector3 right = transform.TransformDirection(Vector3.right);
            Vector3 forward = transform.TransformDirection(Vector3.forward);

            Vector3 moveDirection = right * xAxis + forward * zAxis;
            moveDirection.y = moveDirection.y * 0;
            transform.position += vrCamera.transform.TransformDirection(moveDirection);
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

    
}
