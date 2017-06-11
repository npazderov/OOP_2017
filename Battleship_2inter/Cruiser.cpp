#include "Cruiser.h"

Cruiser::Cruiser()
{
    setHP(3);
    setID('Cr');
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
