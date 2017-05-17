#include "Destroyer.h"

Destroyer::Destroyer()
{
    //ctor
}

Destroyer::~Destroyer()
{
    //dtor
}

Destroyer::Destroyer(const Destroyer& other)
{
    //copy ctor
}

Destroyer& Destroyer::operator=(const Destroyer& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
