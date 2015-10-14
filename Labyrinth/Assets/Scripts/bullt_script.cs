using UnityEngine;
using System.Collections;

public class bullt_script : MonoBehaviour {

	public GameObject ball;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnCollisionEnter(Collision other) 
	{
	
            if(other.gameObject.tag == "Level")
            {
				gameObject.SetActive(false);
			}
	
		

			if(other.gameObject.tag == "Player")
			{
				//reset en levens -1 of terug naar start
			}

	}
}
