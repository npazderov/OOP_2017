#include "Destroyer.h"

Destroyer::Destroyer()
{
    //ctor
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
