using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class FinishScript : MonoBehaviour {
	
	private int curLevel;
	public Text curLevelText; 

	// Use this for initialization
	void Start () {
		curLevel = 0;
		curLevelText.text = "Level: " + curLevel;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag("Finish")) {
			curLevel += 1;
			Application.LoadLevel(curLevel);
		}

	}
	
}
