﻿using UnityEngine;
using System.Collections;

public class BallBeweegScript : MonoBehaviour {

	private float moveX;
	private float moveZ;
	private Quaternion gyro;
	private Vector3 rot;
	private Vector3 move;
	
	public Rigidbody rb;
	public Rigidbody level;
	
	public float moveSpeed; 

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
			rot = new Vector3 (rot.y, 0.0f, -rot.x);
			//transform.eulerAngles = rot;
			//move = new Vector3 (-rot.z, 0.0f, rot.x);
			//rb.AddForce(move * Time.deltaTime * 0.1f * moveSpeed);

			level.MoveRotation(Quaternion.Euler(rot));
		} else {
			moveZ = Input.GetAxis ("Vertical");
			moveX = Input.GetAxis ("Horizontal");
			//transform.eulerAngles = new Vector3 (rotateX, 0.0f, rotateZ) * rotationspeed * Time.deltaTime;
			rb.AddForce(new Vector3(moveX, 0.0f, moveZ) * moveSpeed * Time.deltaTime);
			level.MoveRotation(Quaternion.Euler(new Vector3(moveZ, 0.0f, -moveX) * 200.0f * Time.deltaTime));
		}
	}
}
