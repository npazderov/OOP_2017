#include "Carrier.h"

Carrier::Carrier()
{
    setHP(5);
    setID('Ca');
}
Carrier::Carrier(int newHp,char newID, int newPositionX, int newPositionY):Ship(newHp, newID, newPositionX, newPositionY)

{
    hp = newHp;
    ID = newID;
    positionX = newPositionX;
    positionY = newPositionY;
}
Carrier::Carrier(const Carrier& other)
    :Ship(other)
{
}

Carrier& Carrier::operator=(const Carrier& rhs)
{
    if (this == &rhs) 
    {
        Ship::operator=(rhs);
    }
    return *this;
}
