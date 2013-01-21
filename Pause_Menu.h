#pragma once 

#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>

#include "State.h"
#include "Sprite.h"

//****************************
// CONSTANTS
//****************************

#define PAUSE_BUTTON_WIDTH 400
#define PAUSE_BUTTON_HEIGHT 58

#define PAUSE_BUTTON_X WIDTH/2-(PAUSE_BUTTON_WIDTH/2)+45
#define PAUSE_TITLE_Y 50
#define PAUSE_RESUME_Y 200
#define PAUSE_EXIT_Y 300

enum P_BUTTONS{
	PAUSE_RESUME,
	PAUSE_EXIT
};




class Pause_Menu:public State{
private:

	//************************
	// VARIABLES
	//************************
	
	int selection;



	// SPRITES
	//************
	ALLEGRO_BITMAP* pause_title;
	ALLEGRO_BITMAP* pause_resume;
	ALLEGRO_BITMAP* pause_exit;
	
	Sprite Pause_Title;
	Sprite Pause_Resume;
	Sprite Pause_Exit;
	




public:
	Pause_Menu();
	Pause_Menu(bool* keys0, ALLEGRO_EVENT_QUEUE* event_queue0);
	~Pause_Menu();

	//*********************************
	// PAUSE MENU STATE FUNCTION
	//*********************************
	STATES StateFunction();

	//*********************************
	// Timer Event/Screen Update
	//*********************************
	void timerEvent();




	//functions to move the menu selection up or down
	void moveButtons();
	
	void menuUp();
	void menuDown();

	//function to advance button sprites
	void advanceButton();


};
