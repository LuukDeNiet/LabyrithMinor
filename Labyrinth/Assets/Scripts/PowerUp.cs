using UnityEngine;
using System.Collections;

public class PowerUp : MonoBehaviour {

	public GameObject ball;
	public int special;

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

		switch (special)
		{
			case 1:
			
				//add force in oppsite direction
				ball.GetComponent<Rigidbody>().AddForce(ball.GetComponent<Rigidbody>().velocity * -250f);
				break;
			
			case 2:
				//snelheid verdubbelaar
				//ball.GetComponent<NieuwRotatieScript>().moveSpeed = ball.GetComponent<NieuwRotatieScript>().moveSpeed * 2.0f;
				break;
	
			case 3:
				//inverse controls
				//ball.GetComponent<NieuwRotatieScript>().inverse = -1.0f;
				break;
		}

	}


}
