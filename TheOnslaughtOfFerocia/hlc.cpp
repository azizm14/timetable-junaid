//#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;


void combat(int Hatk ,string Ename, int EHp){
    int MaxEHp = EHp;
    cout << "You encounter a(n) ";
    cout << Ename << endl;
    
    while (EHp > 0){
        string move;        
        cout << "What would you like to do?" << endl;
        cout << "1. atk " << endl;
        cin >> move;
    
        if (move == "atk" || move == "1"){
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
int main(){
    int heroatk = 5;
    string enemyname = "orc";
    int enemyhp = 10;
    
    combat(heroatk,enemyname,enemyhp);
    return 0;
}