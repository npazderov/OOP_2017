#include "Battleship.h"

Battleship::Battleship()
{
    position.start_1=2;
    position.start_2=3;
    position.end_1=4;
    position.end_2=5;
    hp=4;
    size=4;

}
Battleship::Battleship(int hp, int size, ShipPosition position)
{
    this->hp=hp;
    this->size=size;

}

int Battleship::getHp() const
{
    return hp;
}
void Battleship::setHp(int hp)
{
    this->hp = hp;
}

int Battleship::getSize() const
{
    return size;
}
void Battleship::setSize(int size)
{
    this->size=size;
}
void Battleship::setPosition(const ShipPosition& position)
{
    this->position=position;
}
