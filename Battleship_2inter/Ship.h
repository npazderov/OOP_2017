#ifndef SHIP_H
#define SHIP_H
#include "ShipPosition.h"
#include <iostream>
#include <cstring>

class Ship
{
    public:
        Ship();
        Ship(int newHp, int newSize);
        ~Ship();
        Ship(const Ship& other);
        Ship& operator=(const Ship& other);
//Getters
        int Gethp() const;
        int Getsize() const;
//Setters

        void Sethp(int) ;
        void Setsize(int);
//Other methods
    virtual void atack () {}
    virtual void initialize () {}

    protected:

    private:
        ShipPosition* position;
        int hp;
        int size;
};

#endif // SHIP_H
