#include "Cruiser.h"

Cruiser::Cruiser()
{
    setHP(3);
    setID('Cr');
}
Cruiser::Cruiser(int newHp,char newID, int newPositionX, int newPositionY):Ship(newHp, newID, newPositionX, newPositionY)

{
    hp = newHp;
    ID = newID;
    positionX = newPositionX;
    positionY = newPositionY;
}

Cruiser::Cruiser(const Cruiser& other)
   : Ship(other)
{
}

Cruiser& Cruiser::operator=(const Cruiser& rhs)
{
    if (this == &rhs) 
    {
        Ship::operator=(rhs);
    }
    return *this;
}
