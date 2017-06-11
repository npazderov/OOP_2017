#include "Submarine.h"

Submarine::Submarine()
{
    setHP(3);
    setID('S');
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
