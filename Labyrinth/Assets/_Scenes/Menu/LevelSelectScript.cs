using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class LevelSelectScript : MonoBehaviour {

	public Canvas SelectMenu;

	public Canvas tutorialsSelectMenu;
	public Canvas campaignSelectMenu;
	
	public Button tutorialsText;
	public Button campaignText;
	public Button backText;

	public Button levelBackText;

	public Button tutorial1;
	public Button tutorial2;
	public Button tutorial3;
	public Button tutorial4;


	public Text tut2Text;
	public Text tut3Text;
	public Text tut4Text;

	
	public Image tut2Image;
	public Image tut3Image;
	public Image tut4Image;

	public static int Highscore;
	public static bool Tut2Allowed = false; 
	public static bool Tut3Allowed = false; 
	public static bool Tut4Allowed = false; 

	//public static bool Tut1Interact = tutorial1.interactable;
	//public static bool Tut2Interact = tutorial2.interactable;
	//public static bool Tut3Interact = tutorial3.interactable;
	//public static bool Tut4Interact = tutorial4.interactable;

	// Use this for initialization
	void Start () 
	{

		SelectMenu = SelectMenu.GetComponent<Canvas>();
		tutorialsSelectMenu = tutorialsSelectMenu.GetComponent<Canvas>();
		campaignSelectMenu = campaignSelectMenu.GetComponent<Canvas>();

		tutorialsText = tutorialsText.GetComponent<Button>();
		campaignText = campaignText.GetComponent<Button>();
		backText = backText.GetComponent<Button>();

		levelBackText = levelBackText.GetComponent<Button>();

		tutorial1 = tutorial1.GetComponent<Button>();
		tutorial2 = tutorial2.GetComponent<Button>();
		tutorial3 = tutorial3.GetComponent<Button>();
		tutorial4 = tutorial4.GetComponent<Button>();

		
		tut2Text = tut2Text.GetComponent<Text>();
		tut3Text = tut3Text.GetComponent<Text>();
		tut4Text = tut4Text.GetComponent<Text>();

		tut2Image = tut2Image.GetComponent<Image>();
		tut3Image = tut3Image.GetComponent<Image>();
		tut4Image = tut4Image.GetComponent<Image>();


		//buttons
		tutorialsText.enabled = true;
		campaignText.enabled = true;
		backText.enabled = true;

		tutorial1.enabled = false;	
		tutorial2.enabled = false;	
		tutorial3.enabled = false;	
		tutorial4.enabled = false;	


		tutorial2.interactable = false; tut2Text.text = "";
		tutorial3.interactable = false;	tut3Text.text = "";
		tutorial4.interactable = false; tut4Text.text = "";

		//canvasses
		SelectMenu.enabled = true;
		tutorialsSelectMenu.enabled = false;
		campaignSelectMenu.enabled = false;

	}

	public void TutorialsPress()
	{
		SelectMenu.enabled = false;
		tutorialsText.enabled = false;
		campaignText.enabled = false;
		backText.enabled = false;

		tutorialsSelectMenu.enabled = true;
		
		tutorial1.enabled = true;
		tutorial2.enabled = true;
		tutorial3.enabled = true;
		tutorial4.enabled = true;
	}

	public void CampaingPress()
	{
		SelectMenu.enabled = false;
		tutorialsText.enabled = false;
		campaignText.enabled = false;
		backText.enabled = false;

		campaignSelectMenu.enabled = true;


	}

	public void levelBackPress()
	{
		tutorial1.enabled = false;
		tutorial2.enabled = false;
		tutorial3.enabled = false;
		tutorial4.enabled = false;

		tutorialsText.enabled = true;
		campaignText.enabled = true;
		backText.enabled = true;
		
		SelectMenu.enabled = true;
		tutorialsSelectMenu.enabled = false;
		campaignSelectMenu.enabled = false;
		Application.LoadLevel("LevelSelect");
	}

	public void backPress()
	{
		Application.LoadLevel(0);
	}

	public void Tutorial1Press()
	{
		Application.LoadLevel(2);
	}

	public void Tutorial2Press()
	{
		if(Tut2Allowed)
		{
		Application.LoadLevel(3);
		}
	}

	public void Tutorial3Press()
	{
		if(Tut3Allowed)
		{
		Application.LoadLevel(4);
		}
	}

	public void Tutorial4Press()
	{
		if(Tut4Allowed)
		{
		Application.LoadLevel(5);
		}	
	}

	public static void AllowTut2()
	{
		Tut2Allowed = true;
	}

	public static void AllowTut3()
	{
		Tut3Allowed = true;
		//Tut3Interact():
	}

	public static void AllowTut4()
	{
		Tut4Allowed = true;
		//Tut4Interact = true;
	}
	
	void Update()
	{	
		if(Tut2Allowed){tutorial2.interactable = true; tut2Text.text = "Tutorial 2"; tut2Image.enabled = false;}
		if(Tut3Allowed){tutorial3.interactable = true; tut3Text.text = "Tutorial 3"; tut3Image.enabled = false;}
		if(Tut4Allowed){tutorial4.interactable = true; tut4Text.text = "Tutorial 4"; tut4Image.enabled = false;}
	}
	
}
	
