#include "Carrier.h"

Carrier::Carrier()
{
    //ctor
}

Carrier::~Carrier()
{
    //dtor
}

Carrier::Carrier(const Carrier& other)
{
    //copy ctor
}

Carrier& Carrier::operator=(const Carrier& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
