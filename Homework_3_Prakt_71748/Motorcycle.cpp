#include "Motorcycle.h"

Motorcycle::Motorcycle()
:Vehicle()
{
    SeteType(MotorcycleType::None);
}
Motorcycle::Motorcycle(String newName,int* newEGN,String newCarPlate,String newRegDate,String newColor,
                Engine newTypeEngine , int newHorsePower , double newVolume ,int newCylinders ,Euro newEuroStandart,
                MotorcycleType newType)
{
    SeteType(newType);
}

Motorcycle::~Motorcycle()
{
    //dtor
}

Motorcycle::Motorcycle(const Motorcycle& other)
:Vehicle(other)
{
    SeteType(other.eType);
}

Motorcycle& Motorcycle::operator=(const Motorcycle& rhs)
{
    if (this == &rhs)
    {
        Vehicle::operator=(rhs);
        SeteType(rhs.eType);
    }
    return *this;
}

void Motorcycle::SeteType(MotorcycleType newType)
{
    eType=newType;
}
