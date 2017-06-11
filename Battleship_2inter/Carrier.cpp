#include "Carrier.h"

Carrier::Carrier()
{
    //ctor
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
