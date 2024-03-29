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
#include <ctime>
#include "hlc2.h"

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
		if (rand() % 2 == 0) {
			return "joe";
		}
		else if (rand() % 3 == 0) {
			return "nicole";
		}
		else if (rand() % 4 == 1) {
			return "julie and robert";
		}
		else if (rand() % 5 == 1) {
			return "sadie";
		}
		else if (rand() % 6 == 2) {
			return "archie";
		}

	}
};

class Art {
public:
	void printLandscape() {
		//we made four methods to call the ASCII art for the project
		std::cout << R"(    
        _    .  ,   .           .
    *  / \_ *  / \_      _  *        *   /\'__        *
      /    \  /    \,   ((        .    _/  /  \  *'.
 .   /\/\  /\/ :' __ \_  `          _^/  ^/    `--.
    /    \/  \  _/  \-'\      *    /.' ^_   \_   .'\  *
  /\  .-   `. \/     \ /==~=-=~=-=-;.  _/ \ -. `_/   \
 /  `-.__ ^   / .-'.--\ =-=~_=-=~=^/  _ `--./ .-'  `-
/      `.  / /       `.~-^=-=~=^=.-'      '-._ `._
        
        )";
	}
	void bird() {
		std::cout << R"(    
    
                        | 
____________    __ -+-  ____________ 
\_____     /   /_ \ |   \     _____/
 \_____    \____/  \____/    _____/
  \_____                    _____/
     \___________  ___________/
               /____\
                           
        )";
	}
	void gollum() {
		std::cout << R"(    
           ___
         .';:;'.
        /_' _' /\   __
        ;a/ e= J/-'"  '.
        \ ~_   (  -'  ( ;_ ,.
         L~"'_.    -.  \ ./  )
         ,'-' '-._  _;  )'   (
       .' .'   _.'")  \  \(  |
      /  (  .-'   __\{`', \  |
     / .'  /  _.-'   "  ; /  |
    / /    '-._'-,     / / \ (
 __/ (_    ,;' .-'    / /  /_'-._
`"-'` ~`  ccc.'   __.','     \j\L\
                 .='/|\7      
                ' `
        )";
	}
	void creatures() {
		std::cout << R"(    
      -. -. `.  / .-' _.'  _
     .--`. `. `| / __.-- _' `
    '.-.  \  \ |  /   _.' `_
    .-. \  `  || |  .' _.-' `.
  .' _ \ '  -    -'  - ` _.-.
   .' `. %%%%%   | %%%%% _.-.`-
 .' .-. ><(@)> ) ( <(@)>< .-.`.
   (("`(   -   | |   -   )'"))
  / \\#)\    (.(_).)    /(#//\
 ' / ) ((  /   | |   \  )) (`.`.
 .'  (.) \ .md88o88bm. / (.) \)
   / /| / \ `Y88888Y' / \ | \ \
 .' / O  / `.   -   .' \  O \ \\
  / /(O)/ /| `.___.' | \\(O) \
   / / / / |  |   |  |\  \  \ \
   / / // /|  |   |  |  \  \ \  VK
 _.--/--/'( ) ) ( ) ) )`\-\-\-._
( ( ( ) ( ) ) ( ) ) ( ) ) ) ( ) )
        )";
	}
	void Combat_Start() {
		std::cout << R"(
 _____                 _           _     _____ _             _   
/  __ \               | |         | |   /  ___| |           | |  
| /  \/ ___  _ __ ___ | |__   __ _| |_  \ `--.| |_ __ _ _ __| |_ 
| |    / _ \| '_ ` _ \| '_ \ / _` | __|  `--. \ __/ _` | '__| __|
| \__/\ (_) | | | | | | |_) | (_| | |_  /\__/ / || (_| | |  | |_ 
 \____/\___/|_| |_| |_|_.__/ \__,_|\__| \____/ \__\__,_|_|   \__|
	    )";
	}
	void GAME_OVER() {
		std::cout << R"(
   _____          __  __ ______    ______      ________ _____  
  / ____|   /\   |  \/  |  ____|  / __ \ \    / /  ____|  __ \ 
 | |  __   /  \  | \  / | |__    | |  | \ \  / /| |__  | |__) |
 | | |_ | / /\ \ | |\/| |  __|   | |  | |\ \/ / |  __| |  _  / 
 | |__| |/ ____ \| |  | | |____  | |__| | \  /  | |____| | \ \ 
  \_____/_/    \_\_|  |_|______|  \____/   \/   |______|_|  \_\
)";}
	void thanks_for_playing() {
		std::cout << R"(
  _____ _              _         ___          ___ _           _           
 |_   _| |_  __ _ _ _ | |__ ___ | __|__ _ _  | _ \ |__ _ _  _(_)_ _  __ _ 
   | | | ' \/ _` | ' \| / /(_-< | _/ _ \ '_| |  _/ / _` | || | | ' \/ _` |
   |_| |_||_\__,_|_||_|_\_\/__/ |_|\___/_|   |_| |_\__,_|\_, |_|_||_\__, |
                                                         |__/       |___/
	)";
	}
};



class Weapon
{
public:
	//this prints the two clashing swords when it comes to combat in the game
	void loadFeatures()
	{
		std::cout << R"( 

           /\                                                 /\
 _         )( ______________________   ______________________ )(         _
(_)///////(**)______________________> <______________________(**)\\\\\\\(_)
           )(                                                 )(
           \/                                                 \/
        )";


	}
};

class Bow : public Weapon
{
public:
	//this calls the ASCII art for a shield when running combat and the user decides to defend
	void loadFeatures()
	{
		cout << R"( 

\_              _/
] --__________-- [
|       ||       |
\       ||       /
 [      ||      ]
 |______||______|
 |------..------|
 ]      ||      [
  \     ||     /
   [    ||    ]
   \    ||    /
    [   ||   ]
     \__||__/
        --
        )";


	}
};

class Gun : public Weapon
{
public:
	//this is printed when the user encounters the elf
	void loadFeatures()
	{
		cout << R"(
                                                                    |
                                                        \.
                                                        /|.
                                                      /  `|.
                                                    /     |.
                                                  /       |.
                                                /         `|.
                                              /            |.
                                            /              |.
                                          /                |.
     __                                 /                  `|.
      -\                              /                     |.
        \\                          /                       |.
          \\                      /                         |.
           \|                   /                           |\
             \#####\          /                             ||
         ==###########>     /                               ||
          \##==      \    /                                 ||
     ______ =       =|__/___                                ||
 ,--' ,----`-,__ ___/'  --,-`-==============================##==========>
\               '        ##_______ ______   ______,--,____,=##,__
 `,    __==    ___,-,__,--'#'  ==='      `-'              | ##,-/
   `-,____,---'       \####\              |        ____,--\_##,/
       #_              |##   \  _____,---==,__,---'         ##
        #              ]===--==\                            ||
        #,             ]         \                          ||
         #_            |           \                        ||
          ##_       __/'             \                      ||
           ####='     |                \                    |/
            ###       |                  \                  |.
            ##       _'                    \                |.
           ###=======]                       \              |.
          ///        |                         \           ,|.
          //         |                           \         |.
                                                   \      ,|.
                                                     \    |.
                                                       \  |.
                                                         \|.
                                                         /.
                                                        |
 )";}
};




int lie_counter = 0;
int emotional_counter = 0;
int condition;

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

void battle() {
	std::cout << "the day grows old and the sun begins to get lower in the sky" << std::endl;
	std::cout << "The people of Amalystia have been told about this fate..." << std::endl;
	if (condition == 1) {
		std::cout << "You put up a poster to let them know..." << std::endl;
	}
	else if (condition == 2) {
		std::cout << "You used your voice to let passers by know of this fate..." << std::endl;

	}else if(condition == 3){
		std::cout << "The barkeeper let many people of Amalystia know about this terrible onslaught..." << std::endl;
	}
	std::cout << "And luckily, just in time..." << std::endl;
	std::cout << "You hear the sound of many horses coming over the hills in the distance" << std::endl;
	std::cout << "You know that Derophath of Salemrauth has come back to take power once and for all..." << std::endl;
	std::cout << "The people of Amalystia start to panic as they know what is headed their way..." << std::endl;
	std::cout << "THE FINAL BATTLE COMMENCES..." << std::endl;

	//this is the final battle.
	final_battle();

	//credits

	Art artObject;
	artObject.thanks_for_playing();
	std::cout << "CREDITS:\nLead Programmer: Luke Charles\nAssistant Programmers: Sandeep Beedh & Hao-Lam Chan\nDatabase Creators: Junaid, Hamza and Cameron" << std::endl;
	int input;
	cin >> input;
}

void notifying_town() {
	//this method is executed when you want to notify the people of the town about the onslaught
	int notify_choice;
	std::cout << "there are three main things you can do to notify the town, please choose one of them" << std::endl;
	notify_people:
	std::cout << "you can:\n1. Put up posters on the information board in the town square.\n2. Shout to passing travellers in the town\n3. Tell the barkeeper to let people know in the inn." << std::endl;
	std::cout << "which did you want to do?" << std::endl;
	cin >> notify_choice;
	if (notify_choice == 1) {
		std::cout << "You put up a giant poster on the information board in the town" << std::endl;
		std::cout << "this will surely notify a lot of people of the danger which is brewing you think..." << std::endl;
		condition = 1;
		battle();
	}
	else if (notify_choice == 2) {
		std::cout << "You raise your voice and let the passers by know that there is danger on the horizon" << std::endl;
		condition = 2;
		battle();
	}
	else if (notify_choice == 3) {
		std::cout << "You wander into the inn and let the barkeeper know of the danger." << std::endl;
		std::cout << "He says he will let people who come into the inn know of the event..." << std::endl;
		condition = 3;
		battle();
	}
	else{
		std::cout << "that is not an option" << std::endl;
		goto notify_people;
	}

}

void quest2() {
	//this launches when the second quest starts
	int quest2_accept;
	std::cout << "Back in Amalystia..." << std::endl;
	std::cout << "The war is on the horizon, the General has readied the troops\nbut one more task must be completed before battle." << std::endl;
	std::cout << "'you must notify the town of the onslaught' the general tells you. 'This is very important'" << std::endl;
	quest2:
	std::cout << "QUEST: Notify Amalystia of the upcoming onslaught.\n1. ACCEPT\n2. DECLINE" << std::endl;
	cin >> quest2_accept;
	if (quest2_accept == 1) {
		std::cout << "you immediately get to notifying the town..." << std::endl;
		notifying_town();
	}
	else if (quest2_accept == 2) {
		int quest_accept2;
		std::cout << "you tell the general that this can wait." << std::endl;
		std::cout << "the general tells you 'Listen here boy! Of course it cannot wait, people will be killed with that attitude!!'" << std::endl;
		ask2:
		std::cout << "'now I'm going to ask you again nicely, please notify the town of the onslaught' he says to you." << std::endl;
		std::cout << "what do you do?\n1. ACCEPT\n2. DECLINE" << std::endl;
		cin >> quest_accept2;
		if (quest_accept2 == 1) {
			std::cout << "'thats more like it!' Says the general." << std::endl;
			std::cout << "you immediately get to notifying the town..." << std::endl;
			notifying_town();
		}
		else if (quest_accept2 == 2) {
			std::cout << "'I say, I've had it with you my boy...' The general pulls would a revolver and points it in your direction..." << std::endl;
			std::cout << "'Any last words?' He says..." << std::endl;
			std::cout << "but before you can reply, he pulls the trigger and shoots you down." << std::endl;
			Art unlucky;
			unlucky.GAME_OVER();
			int end;
			std::cout << std::endl;
			cin >> end;

		}
		else {
			std::cout << "that is not an option" << std::endl;
			goto ask2;
		}

	}
	else {
		std::cout << "that is not an option" << std::endl;
		goto quest2;
	}
}

//this method runs after they meet joe and have to collect the apples from the dark forest for the general
//6th method executed
void joe_quest2() {
	int apple_choice2 = 0;
	cout << "'What are you doing out here?' Joe asks you." << endl;
	cout << "'We are searching for apples for the general of Ferocia' you reply." << endl;
	cout << "Ah! Allow me to lead you there..." << endl;
	cout << "Upon reaching the apple trees in the dark forest you realise you are being watched." << endl;
	cout << "You take a look behind you and notice a bunch of elves watching you from afar." << endl;
	apple_choice:
	cout << "One of the elves begins to ready his bow." << endl;
	Gun *g = new Gun;
	g->loadFeatures();
	std::cout << "Do you.. \n1. Run Away\n2. Fight" << std::endl;
	cin >> apple_choice2;
	if (apple_choice2 == 1) {

		//quest 2 completion, now time to notify the town of Ferocia about the onslaught
		std::cout << "you run away from the elves successfully, and make your way back to Ferocia unharmed." << std::endl;
		std::cout << "you have returned with some of the apples which were requested." << std::endl;
		std::cout << "you then hand the General the apples which collected and he looks very pleased" << std::endl;
		std::cout << "QUEST COMPLETE - 100XP" << std::endl;
		XP = XP + 100;
		std::cout << "Your total XP is " << XP << std::endl;

		quest2();
	}
	else if (apple_choice2 == 2) {
		Art call;
		call.Combat_Start();

		test2();

		//quest 2 completion after combat
		std::cout << "you have returned with some of the apples which were requested." << std::endl;
		std::cout << "you then hand the General the apples which collected and he looks very pleased" << std::endl;
		std::cout << "QUEST COMPLETE - 100XP" << std::endl;
		XP = XP + 100;
		std::cout << "Your total XP is " << XP << std::endl;

		quest2();
	}
	else {
		std::cout << "that is not an option" << std::endl;
		goto apple_choice;
	}
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
		//quest2();
		joe_quest2();
	}
	else if (backstory == 2) {
		//quest2();
		joe_quest2();
	}
	else {
		cout << "That is not an option" << endl;
		goto backstory_question;
	}
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
				XP = XP + 100;
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
			goto general;
		}
		else {
			cout << "that is not an option" << endl;
		}
	}
}



//this is a method which runs if you wish to leave the town
void out_town() {
	Art callArt;

	int choice_11 = 0, choice_22, choice_33, age;

	cout << "OUT OF TOWN" << endl;
	cout << "You have decided to head out of town...." << endl;
	cout << "as you are walking you realise that you start to feel dizzy" << endl;
	cout << " suddenly you collapse..." << endl;
	cout << "waking up later you find out that you are in a deserted park there is no life to be seen" << endl;
	cout << "you decide to walk forward on coming you see" << endl;
	callArt.printLandscape();
	cout << "A forest towards you left and a swamp towards your right, Your jorney starts.... " << endl;
	cout << "1. Please Enter '1' to visit the foresr or -1 to exit the game" << endl;
	cin >> choice_11;

	if (choice_11 == 1)
	{
		cout << "As you are walking into the forest you can smell the fresh breeze of air..." << endl;
		cout << "you can also hear the birds over head....." << endl;
		callArt.bird();
		cout << "everything seems to be going fine you are enjoying atmosphere" << endl;
		cout << "however a stone is kicked by your foot this triggers the ground to rumble" << endl;
		cout << "you hear all of the creatures awakening" << endl;
		cout << "you start to panic and therefore decide to....." << endl;
		cout << "run back to where you came from, you now have an option do you wish to go the swamp instead" << endl;
		cout << "Please type Yes, No, Maybe" << endl;
		cout << "1. Yes\n2. No\n3.Maybe" << endl;
		cin >> age;

		{

			switch (age)
			{
			case 1:
				cout << "You have decided to go into the swamps" << endl;
				break; // end of case will run case 2 , 3 and default
			case 2:
				cout << "You are to far out to say no..... you will have to enter" << endl;
				break;  // end of case will run case 3 and default
			case 3:
				cout << "having a unstable mind this means we deicde to send you in" << endl;
				break;  // end of case will run defaul only
			default:
				cout << "sorry this is'nt a available option n" << endl;
			}
		}
		{
			cout << "You look around all you can see....... " << endl;
			cout << "is leaves and bones on the floor it all looks unusal to you" << endl;
			cout << "as you walk forward towards the waters you meet some hunched back over looking creatures they look at you" << endl;
			cout << " thye snarl, you realise that they are gollums" << endl;
			cout << "you actually realise that they are a few, i can inform they are of ages:" << endl;
			{
				srand(time(0)); // a random number from the clock - every time game played ensures new number generated

				for (int x = 1; x < 5; x++) {
					cout << 1 + (rand() % 10) << "years old" << endl;
					// using a rand generator but i cant have zero age so i added 1 
					// decrease the age using modulus function 
				}
			}
			callArt.gollum();

			cout << "they are aggravated and want to fight" << endl;
			cout << "do you wish to attack " << endl;
		attack_choice:
			cout << "please choose 1 = yes 2 = no" << endl;
			cin >> choice_33;

			if (choice_33 == 1) {
				//the file combat_start is called here.
				Art run;
				//	run.Combat_Start();
					//test();
					//weapons();
					// uncomment to call .h file will allow combat to run
				cout << "you've managed to kill the gollum" << endl;
				cout << "however after killing the gollum the sky falls dark" << endl;
				cout << "many more creatures start to approach you" << endl;
				{
					int radoms;
					int creatares[22];
					srand(time(0));
					for (int x = 1; x < 22; x++) {
						radoms = 1 + (rand() % 14);
					}
					cout << "1.Amount of Creatures remaining\n2.Hits to kill the Creatures" << endl;
					cout << "some creatures with huge hitpoints can not be killed they must be convinsed to change sides" << endl;

					cout << "Creatures   -  Hits" << endl;
					for (int x = 0; x <= 12; x++) {
						creatares[13] = radoms;

						cout << x << "   ------------  " << creatares[x] << endl;
					}
				}
				cout << "therefore you decide to go back to the main town and prepare for war" << endl;
				callArt.creatures();
				//quest2(); 
				// uncomment to start second quest- ready to be called
			}
			else if (choice_33 == 2) {
				cout << "You try to go back to the village however night falls to dark , you could try again however it is 12 hours since next light." << endl;
				cout << "please pick from the options again" << endl;
				goto attack_choice;
			}
		}

		if (choice_11 == 2)
			// above i have ran function back to choice allow user to go back - if they dont this code will run putting them into town
		{
			cout << "Instead of going to the swamp... you go back to the main to prepare for the next war" << endl;
			cout << "After realising that they are many creatures from unknown sources you have decided that you are going to go back in to the town" << endl;
			cout << "and grow strong and prepare for the war " << endl;
			cout << "you are now back in the main town....." << endl;
		}
	}
}


//this is a method which runs if you decide to look around town
void around_town() {

	int backstory_question;

	nameNPCs randomName;
	string chosen_name = randomName.names();

	cout << "Walking around town you can see " << chosen_name << endl;
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

	if (tavern_choice2 == 1) {
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
		else if (subchoice_0 == 2) {
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
	else if (tavern_choice2 == 2) {
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

	if (townchoice_0 == 1 || townchoice_0 == 2 || townchoice_0 == 3) {
		if (townchoice_0 == 1) {
			tavern();
		}
		else if (townchoice_0 == 2) {
			around_town();
		}
		else if (townchoice_0 == 3) {
			out_town();
			townchoice_0 == 5;
			quest2();
		}
		else {
			cout << "That is not an option" << endl;
		}
	}
	else {
		quest2();
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
	Art get;
	getName.title();

	//int a = attack();
	//int c = combat();

	int herohp = 30;                       //stats should be stored in database later
	int heroatk = 5;

	string enemyname = "Orc";
	int enemyhp = 10;
	int enemyatk = 6;

	//get.Combat_Start();
	//test();

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