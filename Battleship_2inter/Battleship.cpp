#include "Battleship.h"

Battleship::Battleship()
{
    setHP(4);
    setID('B');
}
Battleship::Battleship(int newHp,char newID, int newPositionX, int newPositionY):Ship(newHp, newID, newPositionX, newPositionY)

{
    hp = newHp;
    ID = newID;
    positionX = newPositionX;
    positionY = newPositionY;
}

Battleship::Battleship(const Battleship& other)
    :Ship(other)
{
}

Battleship& Battleship::operator=(const Battleship& rhs)
{
    if (this == &rhs)
    {
        Ship::operator=(rhs);
    }
    return *this;
}
