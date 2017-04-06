#include "Submarine.h"

Submarine::Submarine()
{
    position.start_1=2;
    position.start_2=3;
    position.end_1=4;
    position.end_2=5;
    hp=3;
    size=3;

}
Submarine::Submarine(int hp, int size, ShipPosition position)
{
    this->hp=hp;
    this->size=size;

}
int Submarine::getHp() const
{
    return hp;
}
void Submarine::setHp(int hp)
{
    this->hp = hp;
}

int Submarine::getSize() const
{
    return size;
}
void Submarine::setSize(int size)
{
    this->size=size;
}

void Submarine::setPosition(const ShipPosition& position)
{
    this->position=position;
}

