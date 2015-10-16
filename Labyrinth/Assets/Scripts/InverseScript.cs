using UnityEngine;
using System.Collections;

public class InverseScript : MonoBehaviour {

	public GameObject ball;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update()
	{

		transform.Rotate (new Vector3 (15, 30, 45) * Time.deltaTime);

	}

	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.name == "Ball")
		{
			gameObject.SetActive(false);
			Powerup();
		}
	}

	void Powerup()
	{
		//inverse is GO!
		ball.GetComponent<NieuwRotatieScript>().inverse = -1.0f;

			
	}
}
