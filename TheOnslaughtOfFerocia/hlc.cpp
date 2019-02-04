//#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;


int combat(int Hhp,int Hatk,string Ename,int Ehp,int Eatk){   //start of combat function
    int MaxHhp = Hhp;                             //store hero max HP
    int MaxEhp = Ehp;                             //store enemy max HP
    
    cout << endl;
    cout << "You encounter a(n) ";
    cout << Ename << endl;
    cout << endl;
    
    
    
    while (Hhp > 0 && Ehp > 0){                  //loop until enemy is dead
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
        
        if (Hhp < 0){                //End loop if hero is dead
            Hhp == 0;
            return Hhp;
            }
        
        while (turn == false){
        cout << "What would you like to do?" << endl;
        cout << "1. attack " << endl;
        cout << "2. intimidate" << endl;
        cout << "3. nothing" << endl;
        cin >> move;
        cout << endl;
        if (move == "attack" || move == "1"){       //start of player atk
            turn = true;
            Ehp = Ehp - Hatk;
            if (Ehp < 0){
            Ehp = 0;
            }
            cout << "You attack the " ;
            cout << Ename;
            cout << " and dealt ";
            cout << Hatk;
            cout << " damage" << endl;            
        }
        else if (move == "intimidate" || move == "2" ){
        turn = true;
        cout << "You intimidated the ";
        cout << Ename;
        cout << " causing their attack to weaken" << endl;
        Eatk = (Eatk/2);
        }
        
        else if(move == "nothing" || move == "3" ){
        turn = true;
        cout << "You decide to do nothing" << endl;
        }
        
        else{
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
        
        if (Ehp == 0){
            return Hhp;
            }
        else{
        Hhp = Hhp - Eatk;                      //start of enemy atk
        if (Hhp < 0){
        Hhp = 0;
        }
            cout << "The ";
            cout << Ename;
            cout << " attacked you";
            cout << " and dealt ";
            cout << Eatk;
            cout << " damage" << endl; 
            cout << endl;
    }
    }
    }






int main(){                                //main function, currently used to store stats as global variables
    int herohp = 20;                       //stats should be stored in database later
    int heroatk = 5;                       
    
    string enemyname = "Orc";
    int enemyhp = 10;
    int enemyatk = 8;
    
    herohp = combat(herohp,heroatk,enemyname,enemyhp,enemyatk);      //call combat function
        if (herohp !=0){
            cout << "The ";
            cout << enemyname;
            cout << " was defeated" << endl;
            cout << "Remaining hero hp: ";
            cout << herohp << endl;
    }
        else{
            cout << "You were defeated by the ";
            cout << enemyname << endl;
            cout << endl;
            cout << "GAME OVER" << endl;
            
    }
    cout << endl;
    return 0;
}