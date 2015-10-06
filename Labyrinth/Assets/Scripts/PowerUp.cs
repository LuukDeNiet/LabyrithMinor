using UnityEngine;
using System.Collections;

public class PowerUp : MonoBehaviour {



	void Update()
	{

		transform.Rotate (new Vector3 (15, 30, 45) * Time.deltaTime);

	}

	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.name == "Ball") {
			gameObject.SetActive(false);
			SetInverseControls();
		}
	}

	void SetInverseControls(){

		RotationScript rotationScript = GetComponent<RotationScript>();
		rotationScript.InverseControls();

	}


}
