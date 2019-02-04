//#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;


void combat( std::string enemy){
    cout << "You encounter a(n) ";
    cout << enemy << endl;
    cout << "What would you like to do?" << endl;
}

int main(){
     std::string enemy = "orc";
    combat(enemy);
    return 0;
}