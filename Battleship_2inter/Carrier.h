#ifndef CARRIER_H
#define CARRIER_H

#include <Ship.h>


class Carrier : public Ship
{
    public:
        Carrier();
        Carrier(const Carrier& other);
        Carrier& operator=(const Carrier& other);

  
};

#endif // CARRIER_H
