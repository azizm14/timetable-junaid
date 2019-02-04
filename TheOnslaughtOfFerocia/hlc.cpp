//#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;


void combat(int Hhp,int Hatk,string Ename,int Ehp,int Eatk){   //start of combat function
    int MaxHhp = Hhp;
    int MaxEhp = Ehp;
    cout << endl;
    cout << "You encounter a(n) ";
    cout << Ename << endl;
    cout << endl;
    
    while (Hhp > 0 && Ehp > 0){                  //loop until enemy is dead
        string move;                            //deciding what the player does
        cout << "Hero health: ";
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
        
        
        cout << "What would you like to do?" << endl;
        cout << "1. atk " << endl;
        cout << "2. intimidate" << endl;
        cin >> move;
    
        if (move == "atk" || move == "1"){       //start of player atk
            Ehp = Ehp - Hatk;
            if (Ehp < 0){
            Ehp = 0;
            }
            cout << "You attack the " ;
            cout << Ename ;
            cout << "  HP: ";
            cout << Ehp;
            cout << "/";
            cout << MaxEhp << endl;
        }
        else{
            cout << "That is not an option" << endl;
        }
        Hhp = Hhp - Eatk;                      //start of enemy atk
        if (Hhp < 0){
        Hhp = 0;
        }
            cout << "The ";
            cout << Ename;
            cout << " attacked you " ;            
            cout << "  HP: ";
            cout << Hhp;
            cout << "/";
            cout << MaxHhp << endl;
            cout << endl;
        
    }
    cout << "The ";
    cout << Ename;
    cout << " was defeated" << endl;
}





int main(){                                //main function, currently used to store stats as global variables
    int herohp = 20;                       //stats should be stored in database later
    int heroatk = 7;                       
    
    string enemyname = "Orc";
    int enemyhp = 10;
    int enemyatk = 8;
    
    combat(herohp,heroatk,enemyname,enemyhp,enemyatk);     //call combat function
    return 0;
}