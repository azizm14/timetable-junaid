// TheOnslaughtOfFerocia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>				//include string support

using namespace std;			//using standard namespace



//this is a method which runs if you wish to leave the town
void out_town() {

}

//this is a method which runs if you decide to look around town
void around_town() {

}

//this is a method which runs if you enter the tavern
void tavern() {
	int tavern_choice2;

	cout << "As you wonder into the tavern there are a few people sitting down and others near the bar." << endl;
	cout << "It is quite a busy night and so the tavern is quite full and roudy with various other people." << endl;
	cout << "The bartender immediately notices you and waves at you, wanting to talk to you at the bar. Do you...\n1. Wave back but look around the tavern first\n2. Head to the bar" << endl;
	cin >> tavern_choice2;

	if (tavern_choice2 == 1){
		int subchoice_0;
		cout << "around the tavern there are a lot of unique and interesting looking people." << endl;
		cout << "Theres a bunch of dwarves sitting in one of the corners of the tavern laughing histerically over some jokes," << endl;
		cout << "theres also two high elves at the bar ordereing some beverages they are very tall and slender with very light blond hair and one elf appears to be holding a longbow" << endl;
		cout << "the rest of the bar seems to be filled with humans, they seem to be relaxing after a long days work." << endl;
		cout << "what did you want to do? \n1. talk to elves\n2. talk to dwarves\n3. talk to humans\n4. head to bar" << endl;
		cin >> subchoice_0;
		if (subchoice_0 == 1) {
			int elf_reply;
			cout << "as you approach the elves they give you a look of distain" << endl;
			cout << "'What do you want?' one of them says to you" << endl;
			cout << "You can either reply or walk away:\n1. reply\n2. walk away" << endl;
			cin >> elf_reply;

			if (elf_reply == 1) {
				cout << "you begin to open your mouth as they roll their eyes and both walk away from you..." << endl;
			}
			else if (elf_reply == 2) {
				cout << "you walk away from the elves and they both glance at each other and shrug" << endl;
			}
			else {
				cout << "that is unfortunately not an option" << endl;
			}
		}
		else if(subchoice_0 == 2){
			cout << "test sub2" << endl;
		}
		else if(subchoice_0 == 3) {
			cout << "test sub3" << endl;
		}
		else if (subchoice_0 == 4) {
			cout << "test sub4" << endl;
		}
		else {

		}
	}
	else if(tavern_choice2 == 2){
		cout << "this is the second part of the if statement" << endl;

	}
	else {
		cout << "That is unfortunately not an option." << endl;
	}
}

//this method starts the story after the tutorial
void story() {
	int townchoice_0;

	cout << "Derophath of Salemrauth has returned and wants to rule over the land by force." << endl;
	cout << "It is up to you and any other travellers who wish to help you to prepare for the next war which is on the horizon" << endl;
	cout << "You are currently in the town of Amalystia, and can do a number of different things, you can:\n1. Enter the local tavern" << endl;
	cout << "2. Look around the town\n3. Head out of the town" << endl;
	cout << "Please choose an option" << endl;
	cin >> townchoice_0;

	while (true) {
	if (townchoice_0 == 1) {
		tavern();
	}
	else if (townchoice_0 == 2) {
		around_town();
	}
	else if (townchoice_0 == 3) {
		out_town();
	}
	else {
		cout << "That is not an option" << endl;
	}
	}
}


//this runs if the user wishes to start the tutorial
void tutorial() {
	char str[100], choice[100], choice2[200], choice3[100];
	string choice_0, choice_1, choice_2;
	cout << "TUTORIAL START" << endl;
	cout << "Attacking is one of the main aspects of this game you attack by simply typing 'attack' when prompted." << endl;
	cout << "For example..." << endl;
	cout << "you walk into the dungeon and instantly meet with an Orc. He looks very angry. What do you do?";
	cin >> choice_0;

	//executes if the user wants to attack the orc
	if (choice_0 == "attack" || choice_0 == "atk" || choice_0 == "ATTACK" || choice_0 == "ATK") {
		cout << "You swing your sword attempting to hit the Orc..." << endl;
		cout << "SUCCESSFUL" << endl;
		cout << "You dealt 8 damage to the Orc." << endl;
		cout << "You have now left the battlezone" << endl;
	}
	//executes if the user wants to intimidate the orc
	if (choice_0 == "intimidate" || choice_0 == "int" || choice_0 == "INTIMIDATE" || choice_0 == "INT") {
		cout << "You attempt to intimidate the enemy..." << endl;
		cout << "UNSUCCESSUL" << endl;
	}
	else {
		//do i really need to explain this?
		cout << "That is unfortunately not an option" << endl;
	}
	
	cout << "Another option you can do in combat is run away from the enemy. To do this, simply type: retreat" << endl;
	cout << "lets give it a go..." << endl;
	cout << "You are approached by a snarling direwolf. What do you do?";
	cin >> choice_1;

	//user can retreat from the direwolf
	if (choice_1 == "retreat" || choice_1 == "RETREAT" || choice_1 == "ret" || choice_1 == "RET") {
		cout << "You attempt to run away from the direwolf..." << endl;
		cout << "SUCCESSFUL" << endl;
		cout << "You escape from the direwolf" << endl;
	}
	else {
		//again, this is common sense
		cout << "That is unfortunately not an option" << endl;
	}

	cout << "The final option which is possible during combat is the option to intimidate the enemy." << endl;
	cout << "This however is not something which has a high success rate and so should be avoided most of the time" << endl;
	cout << "In order to intimidate the enemy you must simply type: intimidate" << endl;
	cout << "Let's give it a go..." << endl;
	cout << "A Gnoll approaches from around the corner and looks at you curiously...";
	cin >> choice_2;

	//executes if the user successfully intimidates the gnoll
	if (choice_2 == "intimidate" || choice_2 == "INTIMIDATE" || choice_2 == "int" || choice_2 == "INT") {
		cout << "You attempt to intimidate the enemy..." << endl;
		cout << "SUCCESSFUL" << endl;
		cout << "The Gnoll runs away in fear" << endl;
	}
	else {
		//catches user if they enter something which is not an option
		cout << "That is unfortunately not an option" << endl;
	}

}

//starter story for the user, before the tutorial
void introduction() {
	char str[100], name[100], choice[100];
	double age;

	cout << "A long time has passed since the last war." << endl;
	cout << "Many people have forgotten about how devistating it was..." << endl;
	cout << "You were only a child when the first war happened, but what was your name?";
	cin >> str;

	cout << "Ah " << str << ", what a nice name." << endl;
	cout << "And how old are you now?" << endl;
	cin >> age;

	//this next statement will change dependant on what the user enters as their age
	if (age >= 0 && age <= 12) {
		cout << "Ah, you are still a child then" << endl;
	}
	else if (age > 12 && age < 20) {
		cout << "You're a teenager at this point." << endl;
	}
	else if (age >= 20 && age < 60) {
		cout << "You are now an adult then" << endl;
	}
	else if (age >= 60 && age < 123) {
		cout << "You are very old then..." << endl;
	}
	else {
		cout << "That is not possible." << endl;
	}
	cout << "Now that the war is over, people of Ferocia are focusing on rebuilding and restoring peace to the city." << endl;
	cout << "But there is word that a new threat is emerging and you must do all you can to prepare..." << endl;
}

//main method which calls all other methods
int main()
{
	//test ascii for gollum-like creature

	std::cout << R"(
 ___                              __                                                                            _ ,                                
-   ---___- ,,                  ,-||-,               ,,                   ,,      ,                /\         ,- -                                 
   (' ||    ||                 ('|||  )              ||   _           _   ||     ||               ||         _||_                          '   _   
  ((  ||    ||/\\  _-_        (( |||--)) \\/\\  _-_, ||  < \, \\ \\  / \\ ||/\\ =||=        /'\\ =||=       ' ||    _-_  ,._-_  /'\\  _-_ \\  < \, 
 ((   ||    || || || \\       (( |||--)) || || ||_.  ||  /-|| || || || || || ||  ||        || ||  ||          ||   || \\  ||   || || ||   ||  /-|| 
  (( //     || || ||/          ( / |  )  || ||  ~ || || (( || || || || || || ||  ||        || ||  ||          |,   ||/    ||   || || ||   || (( || 
    -____-  \\ |/ \\,/          -____-   \\ \\ ,-_-  \\  \/\\ \\/\\ \\_-| \\ |/  \\,       \\,/   \\,       _-/    \\,/   \\,  \\,/  \\,/ \\  \/\\ 
              _/                                                     /  \   _/                                                                     
                                                                    '----`                                                                         
		)";

	string tutorialchoice;
	introduction();
	cout << "Do you wish to do the tutorial?\n1. Yes\n2. No" << endl;
	cin >> tutorialchoice;

	//if user wants to do the tutorial, this will jump to that method
	if (tutorialchoice == "1" || tutorialchoice == "yes" || tutorialchoice == "YES") {
		tutorial();
	}
	story();
	return 0;
}



