using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class FinishScript : MonoBehaviour {
	
	private int curLevel;
	public Text curLevelText; 

	// Use this for initialization
	void Start () 
	{
		curLevel = Application.loadedLevel - 1;
		curLevelText.text = "Level: " + curLevel;
	}
	
	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag("LastFinish")) {
			Application.LoadLevel(1);
		}

	}
	
}
