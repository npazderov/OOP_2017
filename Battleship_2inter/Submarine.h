#ifndef SUBMARINE_H
#define SUBMARINE_H

#include <Ship.h>


class Submarine : public Ship
{
    public:
        Submarine();
        Submarine(const Submarine& other);
        Submarine& operator=(const Submarine& other);

};

#endif // SUBMARINE_H
