using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class FinishScript : MonoBehaviour {
	
	private int curLevel;
	public Text curLevelText; 

	// Use this for initialization
	void Start () 
	{
		curLevel = Application.loadedLevel;
		curLevelText.text = "Level: " + curLevel;
	}
	
	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag("Finish")) {
			curLevel ++;
			Debug.Log(curLevel);
			Application.LoadLevel(1);
		}

	}
	
}
