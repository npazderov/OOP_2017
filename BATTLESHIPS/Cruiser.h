#pragma once
#include "ShipPosition.h"

class Cruiser
{
private:
    ShipPosition position;
     int hp;
    int size;


public:
    Cruiser();
    Cruiser(int hp,int size,ShipPosition position);
    const ShipPosition& getPosition() const ;
    void setPosition(const ShipPosition& position) ;

    int getHp() const;
    void setHp( int);

    int getSize()const;
    void setSize( int);

};
