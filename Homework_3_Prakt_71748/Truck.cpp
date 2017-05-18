#include "Truck.h"

Truck::Truck()
:Vehicle()
{
    SeteTruckType(TruckType::Default);
}
Truck::Truck(String newName,int* newEGN,String newCarPlate,String newRegDate,String newColor,
                Engine newTypeEngine , int newHorsePower , double newVolume ,int newCylinders ,Euro newEuroStandart,
                TruckType newTruckType)
{
    SeteTruckType(newTruckType);
}

Truck::~Truck()
{
    //dtor
}

Truck::Truck(const Truck& other)
:Vehicle(other)
{
    SeteTruckType(other.eTruckType);
}

Truck& Truck::operator=(const Truck& rhs)
{
    if (this == &rhs)
    {
        Vehicle::operator=(rhs);
        SeteTruckType(rhs.eTruckType);
    }
    return *this;
}

void Truck::SeteTruckType(TruckType newTruckType)
{
    eTruckType=newTruckType;
}
