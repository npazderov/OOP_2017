#include "Cruiser.h"

Cruiser::Cruiser()
{
    //ctor
}

Cruiser::~Cruiser()
{
    //dtor
}

Cruiser::Cruiser(const Cruiser& other)
{
    //copy ctor
}

Cruiser& Cruiser::operator=(const Cruiser& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
