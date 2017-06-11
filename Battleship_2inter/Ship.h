#ifndef SHIP_H
#define SHIP_H
#include "Map.h"
#include <iostream>
#include <cstring>

class Ship : public Map
{
    public:
        Ship();
        Ship(int newHp,char newID, int newPositionX, int newPositionY);
        ~Ship();
        Ship(const Ship& other);
        Ship& operator=(const Ship& other);
//Getters
        int getHp() const;
        char getID()const;
        int getPositionX()const;
        int getPositionY()const;
//Setters
        void setHP(int _HP);
        void setID(char _ID);

    //Other methods
        virtual void place(int _positionX, int _positionY){};
        virtual void attack(int _positionX, int _positionY){};

        virtual void specialAbility(){};

    protected:

    private:
        int hp;
        char ID;
        int positionX;
        int positionY;
};

#endif // SHIP_H
