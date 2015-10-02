using UnityEngine;
using System.Collections;

public class RotationScript : MonoBehaviour {
	private float rotateX;
	private float rotateZ;

	//private Vector3 initPosition;
	//private Vector3 currentPosition;

	//private float angle;
	//private Vector3 currentRotation;

	//public GameObject player; 

	//public GameObject maincamera;

	// Use this for initialization
	void Start () {
		//initPosition = maincamera.transform.position;
		//currentPosition = initPosition;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	// Update is called before each physics update
	void FixedUpdate() {
		rotateZ = Input.GetAxis ("Horizontal") * -1;
		rotateX = Input.GetAxis ("Vertical");
		transform.Rotate (new Vector3 (rotateX, 0.0f, rotateZ));



		//maincamera.transform.rotation.ToAngleAxis (out angle, out currentRotation);

		//if (angle >= 45) {
			//maincamera.transform.Rotate (new Vector3 (rotateX, 0.0f, 0.0f));
			//currentPosition = currentPosition + new Vector3 (0.0f, rotateX * 0.4f, rotateX * 0.1f);
			//maincamera.transform.position = currentPosition;
		//}


	}

}
