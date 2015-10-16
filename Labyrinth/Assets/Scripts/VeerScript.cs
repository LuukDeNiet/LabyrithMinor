using UnityEngine;
using System.Collections;

public class VeerScript : MonoBehaviour {

	public GameObject ball;


	void Start(){

	//Rigidbody rb = other.GetComponent<Rigidbody>();

	}


	void Update()
	{

		transform.Rotate (new Vector3 (15, 30, 45) * Time.deltaTime);

	}

	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.name == "Ball")
		{
			//gameObject.SetActive(false);
			Powerup();
		}
	}

	void Powerup()
	{
		//add force in oppsite direction
		ball.GetComponent<Rigidbody>().AddForce(ball.GetComponent<Rigidbody>().velocity * -250f);
			
	}


}
