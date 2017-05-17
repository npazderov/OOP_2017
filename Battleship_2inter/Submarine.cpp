#include "Submarine.h"

Submarine::Submarine()
{
    //ctor
}

Submarine::~Submarine()
{
    //dtor
}

Submarine::Submarine(const Submarine& other)
{
    //copy ctor
}

Submarine& Submarine::operator=(const Submarine& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
