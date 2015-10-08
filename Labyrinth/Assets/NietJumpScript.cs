using UnityEngine;
using System.Collections;

public class NietJumpScript : MonoBehaviour {

	public Rigidbody rb;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionExit() {
		rb.velocity = new Vector3 (rb.velocity.x, 0.0f, rb.velocity.z);
	}
}
