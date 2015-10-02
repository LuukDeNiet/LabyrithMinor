using UnityEngine;
using System.Collections;

public class RotationScript : MonoBehaviour {
	private float rotateX;
	private float rotateZ;

	private Quaternion rotation;


	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	// Update is called before each physics update
	void FixedUpdate() {
		rotateZ = Input.GetAxis ("Horizontal") * -1;
		rotateX = Input.GetAxis ("Vertical");
		transform.Rotate (new Vector3 (rotateX, 0.0f, rotateZ));
		rotation = transform.rotation;
		rotation.Set (rotation.x, 0.0f, rotation.z, rotation.w);
		transform.rotation = rotation;
	}

}
