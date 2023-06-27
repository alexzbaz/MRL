using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UMA_turn : MonoBehaviour
{
    // UMA character
    public Rigidbody rb;
    public Transform rbPos;
    public Animator anim;

    // Player
    public Vector3 character;
    public LayerMask whatIsPlayer;

    public bool inRadius;
    public float dist = 5f;
    public float waitTime = 1.0f;

    // Start is called before the first frame update
    void Start()
    {
        anim = GetComponent<Animator>();
        anim.SetTrigger("Standing");
    }

    // Update is called once per frame
    void Update()
    {
        rbPos = rb.transform;

        SetNewTarget(new Vector3(
            rbPos.position.x,
            transform.position.y,
            rbPos.position.z
        ));

        CheckDistanceToTarget();
        
    }

    private void SetNewTarget(Vector3 newTarget)
    {
        character = newTarget;
    }

    public bool canTurn = true;

    private void CheckDistanceToTarget()
    {
        inRadius = Physics.Raycast(transform.position, (character - transform.position).normalized, dist, whatIsPlayer);
    
        if (inRadius && canTurn)
        {
            anim.SetTrigger("TurnAround");
            anim.ResetTrigger("Standing");
            canTurn = false;
        }

        else
        {
            anim.SetTrigger("Standing");
        }
    }
}
