using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class NieuwRotatieScript : MonoBehaviour {

	public float moveZ; 
	public float moveX;

	public float rotateZ;
	public float rotateX;

	private Vector3 moveVector;
	public float moveSpeed;

	public Rigidbody ball;
	public Rigidbody gameCamera;

	public float inverse;
	
	public Text scoreText;
	public Text highScoreText;

	private int Increaser;
	public int Highscore;

	// Use this for initialization
	void Start () 
	{
		ball = GetComponent<Rigidbody> ();
		if (moveSpeed == 0) 
		{
			moveSpeed = 250.0f;
		}
		inverse = 1.0f;
		
		Screen.sleepTimeout = SleepTimeout.NeverSleep; //Device Never Sleeps
		
		Increaser = 0;

		scoreText = scoreText.GetComponent<Text>();
		highScoreText = highScoreText.GetComponent<Text>();
		
	}


	
	// Update is called once per frame
	void FixedUpdate () {
		Increaser++;
		Highscore = 10000 - Increaser;
		if(Highscore < 0)
		{
			//Highscore = 0;
			Application.LoadLevel(Application.loadedLevel);
		}
		

		if (transform.position.y <= -5.0f) {
			Application.LoadLevel(Application.loadedLevel);
		}

		moveVector = Vector3.zero;
		if ((Input.acceleration.x == 0) && (Input.acceleration.y == 0) && (Input.acceleration.z == 0)) {

			moveX = Input.GetAxis ("Horizontal");
			moveZ = Input.GetAxis ("Vertical");
			moveVector = new Vector3 (moveX, 0.0f, moveZ);
		
		} else {


			moveX = Input.acceleration.x;
			moveZ = Input.acceleration.y;
			moveVector = new Vector3 (moveX, 0.0f, moveZ) * 5.0f;

		}

		ball.AddForce (moveVector * moveSpeed * Time.deltaTime * inverse);


		//ball.AddForce (moveVector * moveSpeed * Time.deltaTime);
		
		rotateZ = moveX * 7.0f;
		rotateX = moveZ * -7.0f;
		
		// vector3.right = x as, vector3.up = z as

		//gameCamera.MoveRotation (Quaternion.AngleAxis (rotateX, Vector3.right) * Quaternion.AngleAxis (rotateZ, Vector3.forward));



		gameCamera.MoveRotation(Quaternion.AngleAxis(rotateX, Vector3.right * inverse ) *  Quaternion.AngleAxis(rotateZ, Vector3.forward * inverse));

		
	}

	void Update()
	{

		if (Input.GetKeyDown ("space"))
			TogglePause ();

		scoreText.text = "Score: " + Highscore;
		if (Application.loadedLevel == 6) {
			highScoreText.text = "Highscore: " + PlayerPrefs.GetInt ("ScoreLevel 1");
		} else 
            if (Application.loadedLevel == 7) {
			PlayerPrefs.SetInt ("Boolean Level 2", 1);
			highScoreText.text = "Highscore: " + PlayerPrefs.GetInt ("ScoreLevel 2");
		} else
            if (Application.loadedLevel == 8) {
			PlayerPrefs.SetInt ("Boolean Level 3", 1);
			highScoreText.text = "Highscore: " + PlayerPrefs.GetInt ("ScoreLevel 3");
		} else
            if (Application.loadedLevel == 9) {
			PlayerPrefs.SetInt ("Boolean level 4", 1);
			highScoreText.text = "Highscore: " + PlayerPrefs.GetInt ("ScoreLevel 4");
		} else
			if (Application.loadedLevel == 10) {
			PlayerPrefs.SetInt ("Boolean level 5", 1);
			highScoreText.text = "Highscore: " + PlayerPrefs.GetInt ("ScoreLevel 5");
		} else
			if (Application.loadedLevel == 11) {
			PlayerPrefs.SetInt ("Boolean level 6", 1);
			highScoreText.text = "Highscore: " + PlayerPrefs.GetInt ("ScoreLevel 6");
		}
	}

	void TogglePause()
	{
		if (Time.timeScale == 0)
		{
			Time.timeScale = 1;
		}
		else
		{
			Time.timeScale = 0;
		}
	}

	void OnTriggerEnter(Collider other) 
	{
		if (other.gameObject.CompareTag ("Finish") && Application.CanStreamedLevelBeLoaded(Application.loadedLevel + 1) && Application.loadedLevel != 5) 
		{
			Application.LoadLevel(Application.loadedLevel + 1);

			//Tutorials
			if(Application.loadedLevel + 1 == 3)
			{
				LevelSelectScript.Tut2Allowed = true;
			}

			if(Application.loadedLevel + 1 == 4)
			{
				LevelSelectScript.Tut3Allowed = true;
			}

			if(Application.loadedLevel + 1 == 5)
			{
				LevelSelectScript.Tut4Allowed = true;
			}


			//Levels
			if(Application.loadedLevel + 1 == 7)
			{
				LevelSelectScript.Level2Allowed = true;
				if(Highscore > PlayerPrefs.GetInt("ScoreLevel 1"))
				{
				PlayerPrefs.SetInt("ScoreLevel 1", Highscore);
				}
			}

			if(Application.loadedLevel + 1 == 8)
			{
				LevelSelectScript.Level3Allowed = true;
				if(Highscore > PlayerPrefs.GetInt("ScoreLevel 2"))
				{
				PlayerPrefs.SetInt("ScoreLevel 2", Highscore);
				}
			}
			
			if(Application.loadedLevel + 1 == 9)
			{
				LevelSelectScript.Level4Allowed = true;
				if(Highscore > PlayerPrefs.GetInt("ScoreLevel 3"))
				{
				PlayerPrefs.SetInt("ScoreLevel 3", Highscore);
				}
			}

			if(Application.loadedLevel + 1 == 10)
			{
				LevelSelectScript.Level5Allowed = true;
				if(Highscore > PlayerPrefs.GetInt("ScoreLevel 4"))
				{
				PlayerPrefs.SetInt("ScoreLevel 4", Highscore);
				}
			}

			if(Application.loadedLevel + 1 == 11)
			{
				LevelSelectScript.Level6Allowed = true;
				if(Highscore > PlayerPrefs.GetInt("ScoreLevel 5"))
				{
					PlayerPrefs.SetInt("ScoreLevel 5", Highscore);
				}
			}
			


		}else if(other.gameObject.CompareTag("Finish") && !Application.CanStreamedLevelBeLoaded(Application.loadedLevel + 1))
		{
			Application.LoadLevel(1);
			if(Application.loadedLevel == 11)
			{
				if(Highscore > PlayerPrefs.GetInt("ScoreLevel 6"))
				{
				PlayerPrefs.SetInt("ScoreLevel 6", Highscore);
				}
			}

		}else if(other.gameObject.CompareTag("Finish") && Application.loadedLevel == 5)
		{
			Application.LoadLevel(1);
		}

	}


	
}
