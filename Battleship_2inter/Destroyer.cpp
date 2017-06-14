#include "Destroyer.h"

Destroyer::Destroyer()
{
    setHP(2);
    setID('D');
}

Destroyer::Destroyer(int newHp,char newID, int newPositionX, int newPositionY):Ship(newHp, newID, newPositionX, newPositionY)

{
    hp = newHp;
    ID = newID;
    positionX = newPositionX;
    positionY = newPositionY;
}

Destroyer::Destroyer(const Destroyer& other)
    :Ship(other)
{
}

Destroyer& Destroyer::operator=(const Destroyer& rhs)
{
    if (this == &rhs) 
    {
        Ship::operator=(rhs);
    }
    return *this;
}
