#include "Destroyer.h"

Destroyer::Destroyer()
{
    position.start_1=2;
    position.start_2=3;
    position.end_1=4;
    position.end_2=5;
    hp=2;
    size=2;

}
Destroyer::Destroyer(int hp, int size, ShipPosition position)
{
    this->hp=hp;
    this->size=size;

}
int Destroyer::getHp() const
{
    return hp;
}
void Destroyer::setHp(int hp)
{
    this->hp = hp;
}

int Destroyer::getSize() const
{
    return size;
}
void Destroyer::setSize(int size)
{
    this->size=size;
}

void Destroyer::setPosition(const ShipPosition& position)
{
    this->position=position;
}
