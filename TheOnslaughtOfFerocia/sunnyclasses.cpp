#include <iostream>
using namespace std;

class Weapon
{
    public:
       void loadFeatures()
         { cout << "Loading weapon features.\n";
              std::cout << R"( 
,_,_,_,_,_,_,_,_,_,_|___________________________________________________
| | | | | | | | | | |__________________________________________________/
'-'-'-'-'-'-'-'-'-'-|-------------------------------------------------
        )" ;
        
         }
};

class shield : public Weapon
{
    public:
       void loadFeatures()
         { cout << "Loading shield features.\n";
         
         cout << "Loading shield features.\n";
         
         cout << R"( 

  |`-._/\_.-`|
  |    ||    |
  |___o()o___|
  |__((<>))__|
  \   o\/o   /
   \   ||   /
    \  ||  /
     '.||.'
       ``
      
        )" ;

         
         }
};

class axe : public Weapon
{
    public:
       void loadFeatures()
         { cout << "Loading bow and arrow features.\n";
         
             cout << R"(
-- /~-__A__-~\ --------------- /~-__A__-~\ --
  |     H     |               |     H     |
  |     H     |               |     H     |
   \_-~~H~~-_/                 \_-~~H~~-_/
        H                           H
        H                           H
        H                           H
        H                           H
------- U ------------------------- U -------
 )" ;

         }
};

int main()
{
    Weapon *w = new Weapon;
    shield *b = new shield;
    axe *g = new axe;

    w->loadFeatures();
    b->loadFeatures();
    g->loadFeatures();

    return 0;
}
