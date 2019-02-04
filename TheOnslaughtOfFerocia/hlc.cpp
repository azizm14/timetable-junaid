//#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;


void combat(int Hatk ,string Ename, int EHp){   //start of combat function
    int MaxEHp = EHp;
    cout << "You encounter a(n) ";
    cout << Ename << endl;
    
    while (EHp > 0){                            //loop until enemy is dead
        string move;                            //deciding what the player does
        cout << "What would you like to do?" << endl;
        cout << "1. atk " << endl;
        cin >> move;
    
        if (move == "atk" || move == "1"){       //start of atk
            EHp = EHp - Hatk;
            cout << "You attack the " ;
            cout << Ename ;
            cout << "  HP: ";
            cout << EHp;
            cout << "/";
            cout << MaxEHp << endl;
        }
        else{
            cout << "That is not an option" << endl;
        }
    }
    cout << "The ";
    cout << Ename;
    cout << " was defeated" << endl;
}
int main(){                                //main function, currently used to store stats as global variables
    int heroatk = 5;                       //stats should be stored in database later
    string enemyname = "orc";
    int enemyhp = 10;
    
    combat(heroatk,enemyname,enemyhp);     //call combat function
    return 0;
}