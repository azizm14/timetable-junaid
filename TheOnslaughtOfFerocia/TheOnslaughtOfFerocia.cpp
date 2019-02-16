// TheOnslaughtOfFerocia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>	
#include <random>
#include <cstdlib>

//include string support

using namespace std;			//using standard namespace

class nameNPCs {
public: //access specifier
	void title() {
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
	}
	
	string names() {
		//this method is used to display random names of NPCs which the user will come accross in the town of Ferocia
		int counter;
		if (rand() %2 == 0) {
			return "joe";
		}
		else if (rand() %3 == 0) {
			return "nicole";
		}
		else if (rand() %4 == 1) {
			return "julie and robert";
		}
		else if (rand() %5 == 1) {
			return "sadie";
		}
		else if (rand() %6 == 2) {
			return "archie";
		}

	}
};

int lie_counter = 0;
int emotional_counter = 0;

//Global variable declaration
int XP;
/**
So the levelling system works like so:
	LEVEL 0 = 0XP
	LEVEL 1 = 300XP + 5
	LEVEL 2 = 600XP + 5
	LEVEL 3 = 900XP + 5
	LEVEL 4 = 1200XP + 5
**/

//this method runs after they meet joe and have to collect the apples from the dark forest for the general
//6th method executed
void joe_quest2() {
	cout << "'What are you doing out here?' Joe asks you." << endl;
	cout << "'We are searching for apples for the general of Ferocia' you reply." << endl;
	cout << "Ah! Allow me to lead you there..." << endl;
	cout << "Upon reaching the apple trees in the dark forest you realise you are being watched." << endl;
	cout << "" << endl;
}

//this method runs when the user goes to the forest after completing the first quest
//5th method executed if the player focuses mainly on story
void forest() {
	int backstory;
	cout << "the forest is dark and gloomy and you can smell the moisture in the air." << endl;
	cout << "You are met with a figure who walks up to you." << endl;
	cout << "The figure does not attack you but bows before you and says 'Greetings, I am Joe Gellert.'" << endl;
	backstory_question:
	cout << "Do you want to know of Joe's Backstory?\n1. Yes\n2. No" << endl;
	cin >> backstory;
	if (backstory == 1) {
		std::cout << R"(He is person who is very confident and has learnt to defend himself as his parents had died when he was 3 years old. 
He is a special person as his parents were great wizards, so he has extraordinary power within him. He casts spells to defeat his enemies. 
He wears a magical Armor which defends and helps him fights his enemy’s. 
he is also 5ft 4 and has black hair. His aim is to help protect his village and find the truth about how his parents died.)";
		joe_quest2();
	}
	else if (backstory == 2) {
		joe_quest2();
	}
	else {
		cout << "That is not an option" << endl;
		goto backstory_question;
	}
}

void quest2() {

}

//this method runs when you go to the bar in the tavern
//4th method executed if the player focuses mainly on completing story
void barkeeper() {
	int questaccept;
	cout << "As you approach the bar, the keeper smiles at you and insists he tell you something of great importance." << endl;
	cout << "'Greetings Traveller! I have something of great importance to tell you!'" << endl;
	cout << "After the last war, the town was left in termoil but word is around that a second war is on the horizon..." << endl;
	cout << "it will be down to you to organise a faction on our behalf with the general to prepare for this next war." << endl;
	cout << "QUEST: Head to the General at the east side of town near the docks.\n1. ACCEPT - 'Aye Aye Sir!'\n2. DECLINE - 'Can I start it later?'\n" << endl;
	cin >> questaccept;
	if (questaccept == 1) {
		int next_location;
	quest:
		cout << "The barkeeper looks at you, 'Be on your way young one, there is much to do!'" << endl;
		cout << "You head out of the inn, and into the town.\nWhere do you go from there?\n1. To the Docks (East)\n2. Out of Town (South)\n3. To the Market (West)\n4. To the Great Wall (North)" << endl;
		cin >> next_location;
		if (next_location == 1) {
			int general_conversation;
		general:
			cout << "Upon arriving at the docks, the general is observing various troops travelling in and out of the city" << endl;
			cout << "He is a tall man with a brown mustache and is smoking a long pipe." << endl;
			cout << "He turns around and sees you, 'Hello there!' he shouts quite loudly." << endl;
			cout << "'What can I do for you?' He asks.\n1. Tell him about the preparation for the next war\n2. (Lie) Just say you are passing by\n3. Say nothing" << endl;
			cin >> general_conversation;
			if (general_conversation == 1) {
				int questaccept2 = 0;
				cout << "'Ah I see' he says. 'Did you want me to rally the troops?'" << endl;
				cout << "You agree and he dismisses you." << endl;
				cout << "QUEST COMPLETE - 100XP" << endl;
				cout << "'Right, I'll get to it.' he says. One thing though you could do for me in the mean time..." << endl;
				cout << "could you head out of town and collect some apples from the forest? I need some for my men." << endl;
			applequest:
				cout << "QUEST: Obtain apples from forest outside Ferocia.\n1. ACCEPT - 'Of course!'\n2. DECLINE - 'I'll come back later...'" << endl;
				cin >> questaccept2;
				//if statements which execute after the 1st quest has been completed
				if (questaccept2 == 1) {
					int aftersecondquest;
					cout << "'Brilliant!' the general says as he nods and walks off" << endl;
				docks:
					cout << "You are now back at the docks." << endl;
					cout << "Do you want to...\n1. Go to Forest\n2. Look around town\n" << endl;
					cin >> aftersecondquest;
					if (aftersecondquest == 1) {
						cout << "you walk through and out of the town and make your way to the forest..." << endl;
						forest();
					}
					else if (aftersecondquest == 2) {
						cout << "You continue looking around town but there is nothing really of interest and so\nyou find yourself heading out to the forest..." << endl;
						forest();
					}
					else {
						cout << "that is unfortunately not an option" << endl;
						goto docks;
					}

				}
				else if (questaccept2 == 2) {
					//if the user declines the quest
					cout << "if you must" << endl;
					goto general;
				}
				else {
					cout << "that is not an option" << endl;
					goto applequest;
				}
			}
			else if (general_conversation == 2) {
				//lie, just say you are passing by
				int queststartoption2;
				int questinitialise2;
				cout << "'Ah, just passing by eh? Well, if you wouldnt mind, could you do something for me?'" << endl;
				cout << "1. 'Yes of course!'\n2. 'I think I'll come back later'" << endl;
				cin >> queststartoption2;
				if (queststartoption2 == 1) {
					cout << "could you head out of town and collect some apples from the forest? I need some for my men." << endl;
				//applequest:
					cout << "QUEST: Obtain apples from forest outside Ferocia.\n1. ACCEPT - 'Of course!'\N2. DECLINE - 'I'll come back later...'" << endl;
					cin >> questinitialise2;
					//if statements which execute after the 1st quest has been completed
					if (questinitialise2 == 1) {
						int aftersecondquest;
						cout << "'Brilliant!' the general says as he nods and walks off" << endl;
						cout << "You are now back at the docks." << endl;
					catch_option:
						cout << "Do you want to...\n1. Go to Forest\n2. Look around town\n" << endl;
						cin >> aftersecondquest;
						if (aftersecondquest == 1) {
							cout << "you walk through and out of the town and make your way to the forest..." << endl;
							forest();
						}
						else if (aftersecondquest == 2) {
							cout << "You continue looking around town but there is nothing really of interest and so\nyou find yourself heading out to the forest..." << endl;
							forest();
						}
						else {
							cout << "that is unfortunately not an option" << endl;
							goto catch_option;
						}
					}
					else if (questinitialise2 == 2) {
						cout << "'if you must' the general says. Time passes, it is now a day later. lol." << endl;
						cout << "you must now collect the apples for the general" << endl;
						forest();
					}
					else {
						cout << "that is not an option" << endl;
						goto general;
					}
				}
				else if (general_conversation == 3) {
					goto general;
				}
				else {
					cout << "that is not an option" << endl;
					goto general;
				}

			}
			else if (next_location == 2) {
				cout << "" << endl;
				//out of town
			}
			else if (next_location == 3) {
				cout << "" << endl;
				//to the market
			}
			else if (next_location == 4) {
				cout << "" << endl;
				//to the great wall
			}
			else {
				cout << "That is not an option" << endl;
				goto quest;
			}
		}
		else if (questaccept == 2) {
			cout << "of course, take all the time you need" << endl;
		}
		else {
			cout << "that is not an option" << endl;
		}
	}
}



//this is a method which runs if you wish to leave the town
void out_town() {
	string choice_0;
	cout << "OUT OF TOWN" << endl;

	cout << "You have decided to head out of town...." << endl;
	cout << "as you are walking you realise that you start to fall ill" << endl;
	cout << "Wait, what?" << endl;
	cout << "you suddenly collapse..." << endl;
	cout << "waking up later you find out that you are in a deserted park there is no life to be seen" << endl;
	cout << "you decide to walk forward on coming you see" << endl;
	cout << "a forest towards you left and a swamp towards your right, which do you choose" << endl;
	cin >> choice_0;



	//executes if the user is going to attack the demon 
	//
	//
	if (choice_0 == "Forest" || choice_0 == "forest" || choice_0 == "FOREST" || choice_0 == "for") {
		cout << "As you are walking into the forest you can smell the fresh breaze of air..." << endl;
		cout << "you can also hear the birds over head....." << endl;
		cout << "everything seems to be going fine you are enjoying atmosphere" << endl;
		cout << "however you accidently knock over a stone this triggers a ground rumble" << endl;
		cout << "you start to panic and therfore decide to....." << endl;
		cout << "run back to where you came from, you now have an option do you wish to take the right instead" << endl;
	}

	// this option will give the use of combat code to be implemnted 

	if (choice_0 == "YES" || choice_0 == "yes" || choice_0 == "Yes" || choice_0 == "yesss") {


		cout << "" << endl;

		cout << "" << endl;
	}
	// this would not be an option so the user can not do this 
	// 
	// 
	else {

		cout << "That is unfortunately not an option" << endl;
	}
	// after the combat has happend the user will have a second choice 
	// 
	// 
	string choice_1;
	cout << "Another option you can do in combat is run away from the enemy. To do this, simply type: retreat" << endl;
	cout << "lets give it a go..." << endl;
	cout << "You are approached by a snarling direwolf. What do you do?";
	cin >> choice_1;

	//depends what the user does
	if (choice_1 == "" || choice_1 == "" || choice_1 == "" || choice_1 == "") {
		cout << "testing" << endl;
		cout << "testing" << endl;
		cout << "testing" << endl;
	}

}

// ending the story which means putting the use back into the main world
//{
	//cout << "testing" << endl;
	//cout << "testing" << endl;
	//cout << "testing" << endl;
	//cout << "testing" << endl;
	//cout << "testing";
//}

//this is a method which runs if you decide to look around town
void around_town() {

	int backstory_question;

	nameNPCs randomName;
	string chosen_name = randomName.names();

	cout << "Walking around town you can see "<< chosen_name << endl;
	cout << "Do you want to know " << chosen_name << " backstory?" << endl;
	cout << "1. Yes\n2. No" << endl;
	cin >> backstory_question;
	if (backstory_question == 1) {
		if (chosen_name == "joe") {
			cout << R"(He is person who is very confident and has learnt to defend himself as his parents had died when he was 3 years old. 
He is a special person as his parents were great wizards, so he has extraordinary power within him. He casts spells to defeat his enemies. 
He wears a magical Armor which defends and helps him fights his enemy’s. 
he is also 5ft 4 and has black hair. His aim is to help protect his village and find the truth about how his parents died.)";
		}
		else if (chosen_name == "nicole") {
			cout << R"(she is known to be very stealth, meaning that it is unpredictable of when she will appear next and she is very cunning when taking down her opponents. 
As she likes to go for the surprise attacks. 
She is known as the daughter of the town hero, which is why she is so strong, and her ultimate weapon is a bow and arrow. 
She has long blonde hair, wears shiny gold Armor that has a arrow holder attached to it. 
Her aim is to grow up strong and become a well-known hero like her father.)";

		}
		else if (chosen_name == "julie and robert") {
			cout << R"(Julie and Robert are brothers and sister who are on a quest to search for there father who they haven’t ever seen.
 Robert is tall about 5ft 8 and has a broad build he has blue eyes and has red hair and wears his fathers pendant around is neck and wears armour with a helmet and has a special sword. 
Him and his sister have been training in the mountains mastering their own skills at there weapons. 
Julie is short 5ft 4 with blonde hair blue eyes and wears a bracelet on her right hand with diamonds and wears armour made out of diamonds and carries a bow and arrow and has learnt the art of archery.)";
		}
		else if (chosen_name == "sadie") {
			cout << R"(Sadie is the daughter of a king who was assassinated by an unknown person which makes her seeks out revenge for whoever killed him. 
She fights with a sword and has a shield with an emblem which represents her family. 
She wears heavy armour which matches her clothing. 
Physically she is athletic, has short hair and is very flexible which allows her to fight closely with foes in the battlefield.)";
		}
		else if (chosen_name == "archie") {
			cout << R"(Archie is from a poor family who was raised in a small town in the country. 
During the day he is a farmer however he trains whenever he gets the time. 
His father has made a name of a great blacksmith, which is where Archie got his sword from. 
He wears rusty armour which was found by himself in the woods. 
It was repaired the best it could by his father, however not much was left from it. 
Archie is small in height which allows him to be more mobile, he has long scruffy hair and he is known to be a top swordsman in his town.)";
		}

	}
	else if (backstory_question == 2) {

	}
	else {
		cout << "that is not an option" << endl;
		cout << "you head into the tavern..." << endl;
		barkeeper();
	}
}

//this is a method which runs if you enter the tavern (3rd method to execute if the user picks the tavern as first option)
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
		cout << "what did you want to do? \n1. talk to elves\n2. talk to dwarves\n4. head to bar" << endl;
		cin >> subchoice_0;
		if (subchoice_0 == 1) {
			int elf_reply;
			cout << "as you approach the elves they give you a look of distain" << endl;
			cout << "'What do you want?' one of them says to you" << endl;
			cout << "You can either reply or walk away:\n1. reply\n2. walk away" << endl;
			cin >> elf_reply;
			
			elf: //goto statement
			if (elf_reply == 1) {
				cout << "you begin to open your mouth as they roll their eyes and both walk away from you..." << endl;
				barkeeper();
			}
			else if (elf_reply == 2) {
				cout << "you walk away from the elves and they both glance at each other and shrug" << endl;
				barkeeper();
			}
			else {
				cout << "that is unfortunately not an option" << endl;
				goto elf;
			}
		}
		else if(subchoice_0 == 2){
			int dwarf_reply;
			cout << "as you begin to walk towards the dwarves, one of them greets you and winks at you warmly" << endl;
			cout << "'Your're new in town I see!' he says." << endl;
			cout << "You can either reply or walk away: \n1. reply\n2. walk away" << endl;
			cin >> dwarf_reply;
			if (dwarf_reply == 1) {
				int dwarf_reply2;
				cout << "What do you choose to reply with:\n1. Yes, was there something that needed taking care of?\n2. Yes, and you are?\n3. (Lie) No, I've lived here all my life.\n4. walk away" << endl;
				cin >> dwarf_reply2;
				if (dwarf_reply2 == 1) {
					cout << "One of the dwarves looked at you, he was very old and had long grey hair with a mighty beard." << endl;
					cout << "The dwarf said 'You're quite the joker, we aint done anything in years! Maybe head to the bar?' " << endl;
					cout << "You then walk to the bar..." << endl;
					barkeeper();
				}
				else if (dwarf_reply2 == 2) {
					int dwarf_reply3;
					dwarf: //goto statement
					cout << "The dwarf smiles and says 'Ah! Yes, I am Daragus of Carenphaud, nice to meet you as he offers his hand..." << endl;
					cout << "You can:\n1. Shake the dwarfs hand\n2. Nod your haid and politely leave\n" << endl;
					cin >> dwarf_reply3;
					if (dwarf_reply3 == 1) {
						cout << "You shake the dwarf's hand and politely take your leave..." << endl;
						barkeeper();
					}
					else if (dwarf_reply3 == 2) {
						cout << "The dwarf looks slightly upset as you do this but smiles allowing you to leave..." << endl;
						barkeeper();
					}
					else {
						cout << "that is not an option" << endl;
						goto dwarf; 
					}
				}
				else if (dwarf_reply2 == 3) {
					lie_counter++;
					cout << "'Oh, you have have you?' says the dwarf aggressively" << endl;
					cout << "'Well, I haven't seen you round...'" << endl;
					cout << "The dwarf gets up and goes to the bar, leaving you standing there..." << endl;
					cout << "You walk up to the bar as well" << endl;
					barkeeper();
				}
				else {
					cout << "You walk away from the dwarves, leaving them unforfilled" << endl;
					barkeeper();
				}

			}
			else if (dwarf_reply == 2) {
				cout << "You rudely walk away from the dwarves and one of them spits in your direction and then laughs with the others at you" << endl;
			}

		}
		else if (subchoice_0 == 4) {
			cout << "you make your way to the bar" << endl;
			barkeeper();
		}
		else {
			cout << "that is not an option" << endl;
			barkeeper();
		}
	}
	else if(tavern_choice2 == 2){
		barkeeper();

	}
	else {
		cout << "That is unfortunately not an option." << endl;
	}
}

//this method starts the story after the tutorial
//2nd method to execute if the user skips the tutorial
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
//1st method to execute
void introduction() {
	char str[100], name[100], choice[100];
	double age;

	cout << "A long time has passed since the last war." << endl;
	cout << "Many people have forgotten about how devistating it was..." << endl;
	cout << "You were only a child when the first war happened, but what was your name? " << endl;
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
	//declaration of class object
	nameNPCs getName;
	getName.title();

	string tutorialchoice;
	introduction();
	cout << "Do you wish to do the tutorial? \n1. Yes\n2. No " << endl;
	cin >> tutorialchoice;

	//if user wants to do the tutorial, this will jump to that method
	if (tutorialchoice == "1" || tutorialchoice == "yes" || tutorialchoice == "YES") {
		tutorial();
	}
	story();
	return 0;
}



