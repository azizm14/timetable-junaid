#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
#include <list>
#include <stdlib.h>
#include "hlc2.h"

using namespace std;
	int attack(int ATK, int HP, bool Char) {
		bool crit = false;
		int hit;
		hit = rand() % 10 + 1;
		cout << hit << endl;
		if (hit < 2) {
			if (Char == true) {
				cout << "Your attack missed the enemy" << endl;
			}
			else {
				cout << "The enemy's attack missed you" << endl;
			}
		}
		else if (hit >= 2 && hit < 10) {
			HP = HP - ATK;
			if (Char == true) {
				cout << "You dealt ";
				cout << ATK;
				cout << " damage" << endl;
			}
			else {
				cout << "You took ";
				cout << ATK;
				cout << " damage" << endl;
			}
		}
		else {
			crit = true;
			HP = HP - ATK * 2;
			if (Char == true) {
				cout << "A critical hit!! You dealt ";
				cout << ATK * 2;
				cout << " damage" << endl;
			}
			else {
				cout << "A critical hit!! You took ";
				cout << ATK * 2;
				cout << " damage" << endl;
			}
		}
		if (HP < 0) {
			HP = 0;
		}
		return HP;
	}

	int combat(int Hhp, int Hatk, string Ename, int Ehp, int Eatk) {   //start of combat function
		int MaxHhp = Hhp;                             //store hero max HP
		int MaxEhp = Ehp;                             //store enemy max HP
		int hit;

		cout << endl;
		cout << "You encounter a(n) ";
		cout << Ename << endl;
		cout << endl;

		while (Hhp > 0 && Ehp > 0) {                  //loop until enemy is dead
			string move;                             //deciding what the player does
			bool turn = false;                       //store if player has taken their turn

			cout << "Hero health: ";                 //Displays health
			cout << Hhp;
			cout << "/";
			cout << MaxHhp;
			cout << "       ";
			cout << Ename;
			cout << " health: ";
			cout << Ehp;
			cout << "/";
			cout << MaxEhp << endl;
			cout << endl;

			if (Hhp < 0) {                //End loop if hero is dead
				Hhp == 0;
				return Hhp;
			}

			while (turn == false) {
				cout << "What would you like to do?" << endl;
				cout << "1. attack " << endl;
				cout << "2. intimidate" << endl;
				cout << "3. nothing" << endl;
				cout << "4. retreat" << endl;
				cout << "5. item" << endl;
				cin >> move;
				cout << endl;

				if (move == "attack" || move == "1") {       //start of player atk
					turn = true;
					Ehp = attack(Hatk, Ehp, true);
				}

				else if (move == "intimidate" || move == "2") {
					turn = true;
					cout << "You intimidated the ";
					cout << Ename;
					cout << " causing their attack to weaken" << endl;
					Eatk = (Eatk / 2);
				}

				else if (move == "nothing" || move == "3") {
					turn = true;
					cout << "You decide to do nothing" << endl;
				}

				else if (move == "retreat" || move == "4") {
					turn = true;
					cout << "You fled the fight" << endl;
					return Hhp;
				}

				else if (move == "item" || move == "5") {
					string item;
					turn = true;
					cout << "What item would you like to use?" << endl;
					cout << "1. small potion" << endl;
					cout << "2. large potion" << endl;
					cin >> item;
					if (item == "1" || item == "small potion") {
						cout << "You use a small potion to heal yourself for 10 health" << endl;
						Hhp = Hhp + 10;
					}
					else if (item == "2" || item == "small potion") {
						cout << "You use a large potion to heal yourself" << endl;
						Hhp = Hhp + 25;
					}
					else {
						cout << "That is not a useable item" << endl;
					}
					if (Hhp >= MaxHhp) {
						Hhp = MaxHhp;
					}

				}

				else {
					cout << "That is not an option" << endl;
				}
			}
			cout << endl;
			cout << "Hero health: ";                 //Displays health
			cout << Hhp;
			cout << "/";
			cout << MaxHhp;
			cout << "       ";
			cout << Ename;
			cout << " health: ";
			cout << Ehp;
			cout << "/";
			cout << MaxEhp << endl;
			cout << endl;

			if (Ehp <= 0) {
				cout << "The " << Ename << " was defeated" << endl;
				return Hhp;
			}
			else {
				Hhp = attack(Eatk, Hhp, false);                      //start of enemy atk
				if (Hhp < 0) {
					Hhp = 0;
				}
			}
		}
	}


	

	//IVE RENAMED THE MAIN FUNCTION TO "TEST" SO I COULD TEST IT
int test() {                                //main function, currently used to store stats as global variables
	int herohp = 30;                       //stats should be stored in database later
	int heroatk = 5;

	string enemyname = "Orc";
	int enemyhp = 10;
	int enemyatk = 6;

	herohp = combat(herohp, heroatk, enemyname, enemyhp, enemyatk);      //call combat function
	if (herohp == 0) {
		cout << "You were defeated by the ";
		cout << enemyname << endl;
		cout << endl;
		cout << "GAME OVER" << endl;
	}
	else {
		cout << endl;
		cout << "Remaining hero hp: " << herohp << endl;
	}
	cout << endl;
	return 0;
}

int test2() {
	int herohp = 30;
	int heroatk = 5;

	string enemyname = "Elf";
	int enemyhp = 10;
	int enemyatk = 6;

	herohp = combat(herohp, heroatk, enemyname, enemyhp, enemyatk);
	if (herohp == 0) {
		std::cout << "you were defeated by the " << enemyname << std::endl;
		std::cout << "GAME OVER" << std::endl;
	}
	else {
		std::cout << std::endl;
		std::cout << "Remaining hero hp: " << herohp << std::endl;
	}
	std::cout << std::endl;
	return 0;
}
