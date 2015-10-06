using UnityEngine;
using System.Collections;

public class PowerUp : MonoBehaviour {

	public GameObject other;

	void Start(){

	//Rigidbody rb = other.GetComponent<Rigidbody>();
	}


	void Update()
	{

		transform.Rotate (new Vector3 (15, 30, 45) * Time.deltaTime);

	}

	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.name == "Ball") {
			gameObject.SetActive(false);
			Powerup();
		}
	}

	void Powerup(){

	
		other.GetComponent<Rigidbody>().AddForce(new Vector3 (0,0,-500));
	}


}
