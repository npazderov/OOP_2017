#include "Cruiser.h"

Cruiser::Cruiser()
{
    position.start_1=2;
    position.start_2=3;
    position.end_1=4;
    position.end_2=5;
    hp=3;
    size=3;

}
Cruiser::Cruiser(int hp, int size, ShipPosition position)
{
    this->hp=hp;
    this->size=size;

}

int Cruiser::getHp() const
{
    return hp;
}
void Cruiser::setHp(int hp)
{
    this->hp = hp;
}

int Cruiser::getSize() const
{
    return size;
}
void Cruiser::setSize(int size)
{
    this->size=size;
}

void Cruiser::setPosition(const ShipPosition& position)
{
    this->position=position;
}

