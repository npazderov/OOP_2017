#ifndef CRUISER_H
#define CRUISER_H

#include <Ship.h>


class Cruiser : public Ship
{
    public:
        Cruiser();
        ~Cruiser();
        Cruiser(const Cruiser& other);
        Cruiser& operator=(const Cruiser& other);

    protected:

    private:
};

#endif // CRUISER_H
