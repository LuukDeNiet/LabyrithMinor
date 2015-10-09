using UnityEngine;
using System.Collections;

public class GyrometerScript : MonoBehaviour {

	private float rotateX;
	private float rotateZ;
	private Quaternion gyro;
	private Vector3 rot;

	public Rigidbody rb;

	public float rotationspeed; 

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		if (Input.gyro.enabled) {
			gyro = Input.gyro.attitude;
			rot = gyro.eulerAngles;
			//rot = new Vector3 (-rot.x, 0.0f, -rot.y);
			rot = new Vector3 (rot.x, 0.0f, -rot.y);
			//transform.eulerAngles = rot;
			rb.MoveRotation(Quaternion.Euler(rot));
		} else {
			rotateZ = Input.GetAxis ("Horizontal") * -1;
			rotateX = Input.GetAxis ("Vertical");
			//transform.eulerAngles = new Vector3 (rotateX, 0.0f, rotateZ) * rotationspeed * Time.deltaTime;
			rb.MoveRotation(Quaternion.Euler(new Vector3(rotateX, 0.0f, rotateZ) * rotationspeed * Time.deltaTime));
		}

	}
}
