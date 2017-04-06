#include "Carrier.h"

Carrier::Carrier()
{
    position.start_1=1;
    position.start_2=2;
    position.end_1=3;
    position.end_2=4;
    hp=5;
    size=5;

}
Carrier::Carrier(int hp, int size, ShipPosition position)
{
    this->hp=hp;
    this->size=size;

}

int Carrier::getHp() const
{
    return hp;
}
void Carrier::setHp(int hp)
{
    this->hp = hp;
}

int Carrier::getSize() const
{
    return size;
}
void Carrier::setSize(int size)
{
    this->size=size;
}

void Carrier::setPosition(const ShipPosition& position)
{
    this->position=position;
}


