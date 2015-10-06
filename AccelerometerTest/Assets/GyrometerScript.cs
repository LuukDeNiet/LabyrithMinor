using UnityEngine;
using System.Collections;

public class GyrometerScript : MonoBehaviour {
	
	private Quaternion gyro;
	private Vector3 rot;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void FixedUpdate () {
		gyro = Input.gyro.attitude;
		rot = gyro.eulerAngles;
		rot = new Vector3 (-rot.x, 0.0f, -rot.y);
		transform.eulerAngles = rot;
	}
}
