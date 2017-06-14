#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <Ship.h>


class Battleship : public Ship
{
    public:
        Battleship();
        Battleship(int newHp,char newID, int newPositionX, int newPositionY)
        Battleship(const Battleship& other);
        Battleship& operator=(const Battleship& other);

   
};

#endif // BATTLESHIP_H
