// TheOnslaughtOfFerocia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>  //include string support

using namespace std;


void story() {
	cout << "Derophath of Salemrauth has returned and wants to rule over the land by force." << endl;
	cout << "It is up to you and any other travellers who wish to help you to prepare for the next war which is on the horizon"

}

void tutorial() {
	char str[100], choice[100], choice2[200], choice3[100];
	string choice_0, choice_1, choice_2;
	cout << "TUTORIAL START" << endl;
	cout << "Attacking is one of the main aspects of this game you attack by simply typing 'attack' when prompted." << endl;
	cout << "For example..." << endl;
	cout << "you walk into the dungeon and instantly meet with an Orc. He looks very angry. What do you do?";
	cin >> choice_0;

	if (choice_0 == "attack" || choice_0 == "atk" || choice_0 == "ATTACK" || choice_0 == "ATK") {
		cout << "You swing your sword attempting to hit the Orc..." << endl;
		cout << "SUCCESSFUL" << endl;
		cout << "You dealt 8 damage to the Orc." << endl;
		cout << "You have now left the battlezone" << endl;
	}
	if (choice_0 == "intimidate" || choice_0 == "int" || choice_0 == "INTIMIDATE" || choice_0 == "INT") {
		cout << "You attempt to intimidate the enemy..." << endl;
		cout << "UNSUCCESSUL" << endl;
	}
	else {
		cout << "That is unfortunately not an option" << endl;
	}
	
	cout << "Another option you can do in combat is run away from the enemy. To do this, simply type: retreat" << endl;
	cout << "lets give it a go..." << endl;
	cout << "You are approached by a snarling direwolf. What do you do?";
	cin >> choice_1;

	if (choice_1 == "retreat" || choice_1 == "RETREAT" || choice_1 == "ret" || choice_1 == "RET") {
		cout << "You attempt to run away from the direwolf..." << endl;
		cout << "SUCCESSFUL" << endl;
		cout << "You escape from the direwolf" << endl;
	}
	else {
		cout << "That is unfortunately not an option" << endl;
	}

	cout << "The final option which is possible during combat is the option to intimidate the enemy." << endl;
	cout << "This however is not something which has a high success rate and so should be avoided most of the time" << endl;
	cout << "In order to intimidate the enemy you must simply type: intimidate" << endl;
	cout << "Let's give it a go..." << endl;
	cout << "A Gnoll approaches from around the corner and looks at you curiously...";
	cin >> choice_2;
	if (choice_2 == "intimidate" || choice_2 == "INTIMIDATE" || choice_2 == "int" || choice_2 == "INT") {
		cout << "You attempt to intimidate the enemy..." << endl;
		cout << "SUCCESSFUL" << endl;
		cout << "The Gnoll runs away in fear" << endl;
	}
	else {
		cout << "That is unfortunately not an option" << endl;
	}

}

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

int main()
{
	introduction();
	tutorial();
	story();
	return 0;
}



