using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class LevelSelectScript : MonoBehaviour {

	public Canvas SelectMenu;

	public Canvas tutorialsSelectMenu;
	public Canvas campaignSelectMenu;
	public Canvas helpMenu;
	public Button tutorialsText;
	public Button campaignText;
	public Button helpText;

	public Button tutorial1;
	public Button tutorial2;
	public Button tutorial3;
	public Button tutorial4;

	// Use this for initialization
	void Start () 
	{
		SelectMenu = SelectMenu.GetComponent<Canvas>();
		tutorialsSelectMenu = tutorialsSelectMenu.GetComponent<Canvas>();
		campaignSelectMenu = campaignSelectMenu.GetComponent<Canvas>();
		helpMenu = helpMenu.GetComponent<Canvas>();

		tutorialsText = tutorialsText.GetComponent<Button>();
		campaignText = campaignText.GetComponent<Button>();
		helpText = helpText.GetComponent<Button>();

		tutorial1 = tutorial1.GetComponent<Button>();
		tutorial2 = tutorial2.GetComponent<Button>();
		tutorial3 = tutorial3.GetComponent<Button>();
		tutorial4 = tutorial4.GetComponent<Button>();

		//buttons
		tutorialsText.enabled = true;
		campaignText.enabled = true;
		helpText.enabled = true;

		tutorial1.enabled = false;
		tutorial2.enabled = false;
		tutorial3.enabled = false;
		tutorial4.enabled = false;

		//canvasses
		SelectMenu.enabled = true;
		tutorialsSelectMenu.enabled = false;
		campaignSelectMenu.enabled = false;
		helpMenu.enabled = false;

	}

	public void TutorialsPress()
	{
		SelectMenu.enabled = false;
		tutorialsText.enabled = false;
		campaignText.enabled = false;

		tutorialsSelectMenu.enabled = true;
		
		tutorial1.enabled = true;
		tutorial2.enabled = true;
		tutorial3.enabled = true;
		tutorial4.enabled = true;
	}

	public void CampaingPress()
	{

	}

	public void HelpPress()
	{

	}

	public void Tutorial1Press()
	{
		Application.LoadLevel(2);
	}

	public void Tutorial2Press()
	{
		Application.LoadLevel(3);
	}

	public void Tutorial3Press()
	{
		Application.LoadLevel(4);
	}

	public void Tutorial4Press()
	{
		Application.LoadLevel(5);
	}
	
	
}
