#include "Destroyer.h"

Destroyer::Destroyer()
{
    setHP(2);
    setID('D');
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
