#include <iostream>

#include "map.h"
#include "Battleship.h"
#include "Carrier.h"
#include "Cruiser.h"
#include "Submarine.h"
#include "Destroyer.h"
#include "Ship.h"
using namespace std;
int Player1_HP = 15;
int Player2_HP = 15;
int main()
{
    Map A;
    Map B;
    Map hidden_A;
    Map hidden_B;
    Cruiser R1;
    Battleship B1;
    R1.place(A);
    A.printField();
    B1.place(A);
    A.printField();

    Cruiser R2;
    Battleship B2;
    R2.place(B);
    B2.place(B);

    A.printMap();
    cout<<endl;
    B.printMap();

    R1.attack(B, hidden_B, Player2_HP);
    hidden_B.printMap();

    return 0;
}
