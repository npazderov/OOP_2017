#include "Battleship.h"

Battleship::Battleship()
{
    
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
