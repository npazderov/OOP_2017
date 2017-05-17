#include "Ship.h"

Ship::Ship()
{
    Sethp(0);
    Setsize(0);
}
Ship::Ship(int newHp, int newSize)
{
    Sethp(newHp);
    Setsize(newSize);
}

Ship::Ship(const Ship& other)
{
    Sethp(other.hp);
    Setsize(other.size);
}

Ship& Ship::operator=(const Ship& rhs)
{
    if (this == &rhs)
    {
        Sethp(rhs.hp);
        Setsize(rhs.size);
    }
    return *this;
}
//Getters
Ship::Gethp() const
{
    return hp;
}
Ship::Getsize() const
{
    return size;
}
//Setters
void Ship::Sethp(int newHp)
{
    hp=newHp;
}
void Ship::Setsize(int newSize)
{
    size=newSize;
}
