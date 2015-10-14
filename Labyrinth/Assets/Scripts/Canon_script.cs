using UnityEngine;
using System.Collections;

public class Canon_script : MonoBehaviour {

	private Vector3 canon_position;
	public Rigidbody bullit;
	private Vector3 hoek;
	private float yhoek;

	// Use this for initialization
	void Start () {
	
		InvokeRepeating("Fire", 1, 5f);
		canon_position = transform.position;
		canon_position.y = canon_position.y + 1f;
		hoek = transform.rotation.eulerAngles;
		yhoek = hoek.y*Mathf.PI/180f;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void Fire() {

		Rigidbody kanonskogel;
		kanonskogel = Instantiate(bullit,canon_position,Quaternion.identity) as Rigidbody;
		kanonskogel.velocity = new Vector3(-Mathf.Cos(yhoek),0,Mathf.Sin(yhoek)) * 10;

	}
}
