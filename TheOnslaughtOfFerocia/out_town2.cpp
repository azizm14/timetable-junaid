
#include <iostream>
#include <vector>
#include <string>	

using namespace std;	

void out_town(){
  
string choice_33;
int choice_11 = 0, choice_22;
 
  
	cout << "OUT OF TOWN" << endl;

	cout << "You have decided to head out of town...." << endl;
	cout << "as you are walking you realise that you start to feel dizzy" << endl;
	cout << " suddenly you collapse..." << endl;
	cout << "waking up later you find out that you are in a deserted park there is no life to be seen" << endl;
	cout << "you decide to walk forward on coming you see" << endl;
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
  
	cout << "a forest towards you left and a swamp towards your right, which do you choose: " << endl;
  cout << "1. Forest\n2. Swamp " << endl;
  cin >> choice_11;
  
	if (choice_11 == 1)
  {
		cout << "As you are walking into the forest you can smell the fresh breeze of air..." << endl;
		cout << "you can also hear the birds over head....." << endl;
    std::cout << R"(    
                            /"  /"  /";
                           /  /`  /` /
                          / /  / ` /`
                         /         ~;
                        <           ;
                         \           ;
                          ;          ;
                          ;          ;
                         ;          /   /^\
                     ___/-,.   __ /`  /`   \
      /~a`~-,__,_,-~`         "`~~-_ `     |
"""""`-___,,.,_,__                    ~-,_ }
                  `~`~""`~-,_          _)_`~`~-,__ _-\,
                     ;`      `~~`\~"``"  "~`~~`~~```""`
                    /             ;  `\,/`
                   |             ;
                   ;            ;
                  /            ;
                  `|_          ;
                    `|         ;
                     ;  \ \ \ ;
                     ;|`\; \\``
                     ``  "  "
        )" ;
		cout << "everything seems to be going fine you are enjoying atmosphere" << endl;
		cout << "however you accidently knock over a stone this triggers the ground to rumble" << endl;
		cout << "you start to panic and therefore decide to....." << endl;
		cout << "run back to where you came from, you now have an option do you wish to go the swamp instead" << endl;
    cout << "Please type Yes or No" << endl;
    cout << "1. Yes\n2. No" << endl;
    cin >> choice_22;
	// this option will give the use of combat code to be implemnted 
	if (choice_22 == 1){
		cout << "You have now entered a swamp, you look around all you can see " << endl;
		cout << "is leaves and bones on the floor it all looks unusal to you" << endl;
    cout << "as you walk forward towards the waters you meet a hunched over creature it looks at you" << endl;
    cout << "and snarls, you realise it's gollum" << endl;
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
    cout << "is aggravated it wants to fight" << endl;
    cout << "do you wish to attack " << endl;
    cin >> choice_33;
// this part is for attacking Hao-lam to add his combat section
    cout << "you've managed to kill the gollum" << endl;
		cout << "however after killing the gollum the sky falls dark" << endl;
		cout << "many more creatures start to approach you" << endl;
    
	}else{
		cout << "That is unfortunately not an option" << endl;
	}}
	// End the game 
	
  
	//They dont wish to go to the swamp which means they must prepare for the next war
	if (choice_11 == 2)   
  {
    cout << "Instead of going to the swamp..." << endl;
    //you prepare for the next war
    //IF STATEMENT NEEDS COMPLETING
    std::cout << R"(    
######################~~..'|.##############.|`..~~#######################
##############~./`.~~./' ./ ################ \. `\. ~~.`\.~##############
############~.' `.`-'   /   ~#############~ .  \   `-'.'  `.~############
##########~.'    |     |  .'\ ~##########~ /`.  |     |     `.~##########
########~.'      |     |  |`.`._ ~####~ _.'.'|  |     |       `.~########
######~.'        `.    |  `..`._|\.--./|_.'..'  |    .'         `.~######
####~.'            \   | #.`.`._`.'--`.'_.'.'.# |   /             `.~####
##~.'       ......  \  | ###.`~'(o\||/o)`~'.### |  /  ......        `.~##
~.`.......'~      `. \  \~####  |\_  _/|  ####~/  / .'      ~`........'.~
;.'                 \ .----.__.'`(n||n)'`.__.----. /                  `;
`.                  .'    .'   `. \`'/ .'   `.    `.                  .'
#:               ..':      :    '. ~~ .`    :      :`..               :#
#:             .'   :     .'     .'  `.     `.     :   `.             :#
#:           .'    .`   .'       . || .       `.   '.    `.           :#
#:         .'    .' :       ....'      `....       : `.    `.         :#
#:       .'    .' ) )        (      )     (      (    )`.    `.       :#
#:     ..'    .  ( ((   )  ) )) (  ((  (  ))  )  ))  ((  `.   `..     :#
#:  ..'      .'# ) ) ) (( ( ( (  ) ) ) ))( ( (( ( (  ) ) #`.     `..  :#
#;.'        .'##|((  ( ) ) ) ) )( (  (( ( ) )) ) ) )( (||##`.       `.:#
#`.        .'###|\__  )( (( ( ( )  )  )) )  (  (( ( )_)/|###`.       .'#
##.`       '#####\__~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~__/#####`      '.##
###        #######  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  #######       ###
        )" ;

// Comments on the next war that they are going to 



  cout << "After realising that they are many creatures from unknown sources you have decided that you are going to go back in to the town" << endl;
	cout << "and grow strong and prepare for the war " << endl;
	cout << "you are now back in the main town....." << endl;
  }
}

int main(){
  out_town();
}



