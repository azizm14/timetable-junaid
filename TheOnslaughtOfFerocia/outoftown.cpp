#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>  
using namespace std;			
	//introduction in order to start out of the world - the option must be chosen 
void story() {
  
	cout << "Derophath of Salemrauth has returned and wants to rule over the land by force." << endl;
	cout << "It is up to you and any other travellers who wish to help you to prepare for the next war which is on the horizon" << endl;
	cout << "You are currently in the town of Amalystia, and can do a number of different things, you can:\n1. Enter the local tavern" << endl;
	cout << "2. Look around the town\n3. Head out of the town" << endl;
	cout << "Please choose an option" << endl;
	int townchoice_0;
  
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

	cout << "OUT OF TOWN" << endl;
  
	cout << "You have decided to head out of town...." << endl;
	cout << "as you are walking you realise that you start to fall ill" << endl;
  cout << "Wait, what?" << endl;
  cout << "you suddenly collaps..." << endl;
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
{
	cout << "testing" << endl;
	cout << "testing" << endl;
	cout << "testing" << endl;
	cout << "testing" << endl;
	cout << "testing";
}
	return 0; 
}
  

