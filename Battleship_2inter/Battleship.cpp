#include "Battleship.h"

Battleship::Battleship()
{
    //ctor
}

Battleship::~Battleship()
{
    //dtor
}

Battleship::Battleship(const Battleship& other)
{
    //copy ctor
}

Battleship& Battleship::operator=(const Battleship& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
