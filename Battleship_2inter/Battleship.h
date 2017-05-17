#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <Ship.h>


class Battleship : public Ship
{
    public:
        Battleship();
        ~Battleship();
        Battleship(const Battleship& other);
        Battleship& operator=(const Battleship& other);

    protected:

    private:
};

#endif // BATTLESHIP_H
