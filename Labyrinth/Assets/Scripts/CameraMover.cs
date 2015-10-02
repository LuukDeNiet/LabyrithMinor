using UnityEngine;
using System.Collections;

public class CameraMover : MonoBehaviour {

	private Vector3 offset;

	public GameObject labyrinth;

	// Use this for initialization
	void Start () {
		offset = transform.position - labyrinth.transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		//transform.position = labyrinth.transform.position + offset;
	}
}
