using UnityEngine;
using System.Collections;

public class NieuwRotatieScript : MonoBehaviour {

	public float moveZ; 
	public float moveX;

	public float rotateZ;
	public float rotateX;

	private Vector3 moveVector;
	public float moveSpeed;

	public Rigidbody ball;
	public Rigidbody gameCamera;

	public float inverse;
	

	// Use this for initialization
	void Start () {
		ball = GetComponent<Rigidbody> ();
		inverse = 1.0f;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		// Make sure it is empty
		moveVector = Vector3.zero;

		moveX = Input.GetAxis ("Horizontal");
		moveZ = Input.GetAxis ("Vertical");
		moveVector = new Vector3 (moveX, 0.0f, moveZ);

		ball.AddForce (moveVector * moveSpeed * Time.deltaTime * inverse);

		rotateZ = moveX * 7.0f;
		rotateX = moveZ * -7.0f;

		// vector3.right = x as, vector3.up = z as
		gameCamera.MoveRotation(Quaternion.AngleAxis(rotateX, Vector3.right * inverse ) *  Quaternion.AngleAxis(rotateZ, Vector3.forward * inverse));
		
	}

	
}
