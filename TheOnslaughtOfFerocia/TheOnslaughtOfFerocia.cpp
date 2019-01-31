// TheOnslaughtOfFerocia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

void tutorial() {
	char choice[100];
	cout << "TUTORIAL START" << endl;
	cout << "Attacking is one of the main aspects of this game you attack by simply typing 'attack' when prompted." << endl;
	cout << "For example..." << endl;
	cout << "you walk into the dungeon and instantly meet with an Orc. He looks very angry. What do you do?";
	cin >> choice;

	if (choice == "attack" || choice == "atk" || choice == "ATTACK" || choice == "ATK") {
		cout << "You swing your sword attempting to hit the Orc..." << endl;
		cout << "It Hits!" << endl;
		cout << "You dealt 8 damage to the Orc." << endl;
		cout << "You have now left the battlezone" << endl;
	}
	if (choice == "intimidate" || choice == "int" || choice == "INTIMIDATE" || choice == "INT") {
		cout << "You attempt to intimidate the enemy" << endl;
		cout << "You are unfortunately unsuccessful." << endl;
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
	return 0;
}



