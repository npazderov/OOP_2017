#include "Submarine.h"

Submarine::Submarine()
{
    //ctor
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
