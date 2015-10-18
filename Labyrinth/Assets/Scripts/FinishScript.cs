using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class FinishScript : MonoBehaviour {

	
	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag("LastFinish")) {
			Application.LoadLevel(1);
		}

	}
	
}
