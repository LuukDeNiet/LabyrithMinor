using UnityEngine;
using System.Collections;

public class RotationScript : MonoBehaviour {
	private float rotateX;
	private float rotateZ;

	public GameObject player; 

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	// Update is called before each physics update
	void FixedUpdate() {
		rotateX = Input.GetAxis ("Horizontal");
		rotateZ = Input.GetAxis ("Vertical");
		transform.Rotate (new Vector3 (rotateX, 0.0f, rotateZ));
	}

}
