//#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;


void combat( std::string enemy){
    string move;
    cout << "You encounter a(n) ";
    cout << enemy << endl;
    cout << "What would you like to do?" << endl;
    cout << "1. atk " << endl;
    cin >> move;
    if (move == "atk" || move == "1"){
        cout << "You attack the " ;
        cout << enemy << endl;
    }
}

int main(){
    string enemy = "orc";
    combat(enemy);
    return 0;
}