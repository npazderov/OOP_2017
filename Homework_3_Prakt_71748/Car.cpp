#include "Car.h"

Car::Car()
:Vehicle()
{
    SeteCarType(CarType::None);
}
Car::Car(String newName,int* newEGN,String newCarPlate,String newRegDate,String newColor,
                Engine newTypeEngine , int newHorsePower , double newVolume ,int newCylinders ,Euro newEuroStandart,
                CarType newCarType)
{
    SeteCarType(newCarType);
}
Car::~Car()
{
    //dtor
}

Car::Car(const Car& other)
:Vehicle(other)
{
   SeteCarType(other.eCarType);
}

Car& Car::operator=(const Car& rhs)
{
    if (this == &rhs)
    {
        Vehicle::operator=(rhs);
        SeteCarType(rhs.eCarType);

    }
    return *this;
}

void Car::SeteCarType(CarType newCarType)
{
    eCarType=newCarType;
}
