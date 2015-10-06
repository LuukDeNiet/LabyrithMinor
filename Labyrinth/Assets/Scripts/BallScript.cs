using UnityEngine;
using System.Collections;

public class BallScript : MonoBehaviour {


	private Vector3 start_position_ball;
	private Quaternion start_rotation_level;
	private GameObject level;

	// Use this for initialization
	void Start () {
		level = GameObject.FindWithTag("Level");
		start_position_ball = transform.position;
		start_rotation_level = level.transform.rotation;
	}
	
	// Update is called once per frame
	void Update () {
	
		if (transform.position.y <= -10) {
			Reset ();
		}
	}

	void Reset(){
		level.transform.rotation = start_rotation_level;
		transform.position = start_position_ball;
		GetComponent<Rigidbody>().velocity = new Vector3 (0,0,0);
	}

	void NextLevel(){
		int i = Application.loadedLevel;
		Application.LoadLevel (i + 1);
	}

}
