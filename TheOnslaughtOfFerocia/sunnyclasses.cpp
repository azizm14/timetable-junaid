#include <iostream>
using namespace std;

class Weapon
{
    public:
       void loadFeatures()
         { cout << "Loading weapon features.\n";
              std::cout << R"( 

           /\                                                 /\
 _         )( ______________________   ______________________ )(         _
(_)///////(**)______________________> <______________________(**)\\\\\\\(_)
           )(                                                 )(
           \/                                                 \/
        )" ;

           
         }
};

class Bomb : public Weapon
{
    public:
       void loadFeatures()
         { cout << "Loading bomb features.\n";
         
         cout << "Loading bomb features.\n";
         
         cout << R"( 

\_              _/
] --__________-- [
|       ||       |
\       ||       /
 [      ||      ]
 |______||______|
 |------..------|
 ]      ||      [
  \     ||     /
   [    ||    ]
   \    ||    /
    [   ||   ]
     \__||__/
        --
        )" ;

         
         }
};

class Gun : public Weapon
{
    public:
       void loadFeatures()
         { cout << "Loading bow and arrow features.\n";
         
             cout << R"(
                                                                    |
                                                        \.
                                                        /|.
                                                      /  `|.
                                                    /     |.
                                                  /       |.
                                                /         `|.
                                              /            |.
                                            /              |.
                                          /                |.
     __                                 /                  `|.
      -\                              /                     |.
        \\                          /                       |.
          \\                      /                         |.
           \|                   /                           |\
             \#####\          /                             ||
         ==###########>     /                               ||
          \##==      \    /                                 ||
     ______ =       =|__/___                                ||
 ,--' ,----`-,__ ___/'  --,-`-==============================##==========>
\               '        ##_______ ______   ______,--,____,=##,__
 `,    __==    ___,-,__,--'#'  ==='      `-'              | ##,-/
   `-,____,---'       \####\              |        ____,--\_##,/
       #_              |##   \  _____,---==,__,---'         ##
        #              ]===--==\                            ||
        #,             ]         \                          ||
         #_            |           \                        ||
          ##_       __/'             \                      ||
           ####='     |                \                    |/
            ###       |                  \                  |.
            ##       _'                    \                |.
           ###=======]                       \              |.
          ///        |                         \           ,|.
          //         |                           \         |.
                                                   \      ,|.
                                                     \    |.
                                                       \  |.
                                                         \|.
                                                         /.
                                                        |
 )" ;

         }
};

int main()
{
    Weapon *w = new Weapon;
    Bomb *b = new Bomb;
    Gun *g = new Gun;

    w->loadFeatures();
    b->loadFeatures();
    g->loadFeatures();

    return 0;
}
