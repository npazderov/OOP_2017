#ifndef CRUISER_H
#define CRUISER_H

#include <Ship.h>


class Cruiser : public Ship
{
    public:
        Cruiser();
        Cruiser(int newHp,char newID, int newPositionX, int newPositionY);
        Cruiser(const Cruiser& other);
        Cruiser& operator=(const Cruiser& other);

};

#endif // CRUISER_H
