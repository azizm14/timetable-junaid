#include <iostream>
#include <vector>
#include <string>	

using namespace std;	

class Art{
  public:
  void printLandscape(){
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
        
        )" ;
  }
  void bird(){
    std::cout << R"(    
    
                        | 
____________    __ -+-  ____________ 
\_____     /   /_ \ |   \     _____/
 \_____    \____/  \____/    _____/
  \_____                    _____/
     \___________  ___________/
               /____\
                           
        )" ;
  }
  void gollum(){
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
        )" ;
  }
  void creatures(){
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
        )" ;
  }
};

void out_town(){
  Art callArt;
  
int choice_11 = 0, choice_22, choice_33,age;

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
    cout << "you hear all of the creatures awakening"<<endl;
		cout << "you start to panic and therefore decide to....." << endl;
		cout << "run back to where you came from, you now have an option do you wish to go the swamp instead" << endl;
		cout << "Please type Yes, No, Maybe" << endl;
		cout << "1. Yes\n2. No\n3.Maybe" << endl;
		cin >> age;

    {

    switch(age)
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
      cout<< "you actually realise that they are a few, i can inform they are of ages:" << endl;
      
      {
        
    srand(time(0)); // a random number from the clock - every time game played ensures new number generated

    for (int x = 1; x<5;x++){
        cout << 1+(rand()%10)<<"years old"<< endl;
      // using a rand generator but i cant have zero age so i added 1 
      // decrease the age i used modulus function 
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
				cout << "you've managed to kill the gollum" << endl;
				cout << "however after killing the gollum the sky falls dark" << endl;
				cout << "many more creatures start to approach you" << endl;
        
          
{
 
    int radoms ;
    int creatares[22];

    srand(time(0)); 

    for (int x = 1; x<22;x++) {
        radoms =  1+(rand()%14); 
    }

  
    cout << "1.Amount of Creatures remaining\n2.Hits to kill the Creatures"<<endl;
        cout << "some creatures with huge hitpoints can not be killed they must be convinsed to change sides"<<endl;

    cout << "Creatures   -  Hits" << endl;
    for (int x= 0; x<=12; x++){
        creatares[13]  = radoms;
      
       cout << x << "   ------------  " << creatares[x] << endl;
      
    }
}

        
 
				cout << "therefore you decide to go back to the main town and prepare for war" << endl;
				callArt.creatures();
				//quest2();
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



int main(){
  out_town();
}
