using UnityEngine;
using System.Collections;

public class bullt_script : MonoBehaviour {

	public GameObject ball;
	public GameObject explosion; 

	void start() {
	}



	void OnCollisionEnter(Collision other) 
	{
	
            if(other.gameObject.tag == "Level")
            {
				gameObject.SetActive(false);
			}
	
		

			if(other.gameObject.tag == "Player")
			{
				ball = other.gameObject;
				ball.SetActive(false);
				

				Instantiate(explosion, transform.position, transform.rotation);
				Invoke("restart", 2.0f);
				//Application.LoadLevel(Application.loadedLevel);
			}

	}

	void restart() {
		Application.LoadLevel (Application.loadedLevel);
	}
}
