#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <Vehicle.h>

enum class MotorcycleType{None,Chopper,Cross,Sport,Cruiser,Tourer};
class Motorcycle : public Vehicle
{
    public:
        Motorcycle();
        Motorcycle(String newName,int* newEGN,String newCarPlate,String newRegDate,String newColor,
                Engine newTypeEngine , int newHorsePower , double newVolume ,int newCylinders ,Euro newEuroStandart,
                MotorcycleType newType);
        ~Motorcycle();
        Motorcycle(const Motorcycle& other);
        Motorcycle& operator=(const Motorcycle& other);


        void SeteType(MotorcycleType);

    protected:

    private:
        MotorcycleType eType;
};

#endif // MOTORCYCLE_H
