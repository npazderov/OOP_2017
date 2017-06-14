#include "Submarine.h"

Submarine::Submarine()
{
    setHP(3);
    setID('S');
}
Submarine::Submarine(int newHp,char newID, int newPositionX, int newPositionY):Ship(newHp, newID, newPositionX, newPositionY)

{
    hp = newHp;
    ID = newID;
    pX = newPositionX;
    pY = newPositionY;
}

Submarine::Submarine(const Submarine& other)
    :Ship(other)
{
}

Submarine& Submarine::operator=(const Submarine& rhs)
{
    if (this == &rhs)
    {
        Ship::operator=(rhs);
    }
    return *this;
}
