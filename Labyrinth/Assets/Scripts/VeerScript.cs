using UnityEngine;
using System.Collections;

public class VeerScript : MonoBehaviour {

	public GameObject ball;

	public AudioClip boing;
	private Rigidbody rb;
	


	void Start(){

		rb = ball.GetComponent<Rigidbody> ();

	}

	void FixedUpdate() {
		rb.velocity = new Vector3 (rb.velocity.x, 0.0f, rb.velocity.z);
	}


	void Update()
	{

		transform.Rotate (new Vector3 (15, 30, 45) * Time.deltaTime);

	}

	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.name == "Ball")
		{
			//gameObject.SetActive(false);
			Powerup();
			GetComponent<AudioSource>().PlayOneShot(boing);
			Invoke("DestroyVeer", 1.0f);
		}
	}

	void Powerup()
	{
		//add force in oppsite direction
		//ball.GetComponent<Rigidbody>().AddForce(ball.GetComponent<Rigidbody>().velocity * -250f);
		rb.AddForce (new Vector3 (rb.velocity.x, 0.0f, rb.velocity.z) * -175.0f);



	}

	void DestroyVeer() {
		Destroy (this.gameObject);
	}



}
