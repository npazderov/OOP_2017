#ifndef DESTROYER_H
#define DESTROYER_H

#include <Destroyer.h>


class Destroyer : public Ship
{
    public:
        Destroyer();
        Destroyer(int newHp,char newID, int newPositionX, int newPositionY);
        Destroyer(const Destroyer& other);
        Destroyer& operator=(const Destroyer& other);

};

#endif // DESTROYER_H
