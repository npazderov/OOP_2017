#ifndef DESTROYER_H
#define DESTROYER_H

#include <Destroyer.h>


class Destroyer : public Destroyer
{
    public:
        Destroyer();
        ~Destroyer();
        Destroyer(const Destroyer& other);
        Destroyer& operator=(const Destroyer& other);

    protected:

    private:
};

#endif // DESTROYER_H
