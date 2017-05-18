#include "Vehicle.h"

Vehicle::Vehicle()
:VehicleInfo()
{
    SetEngineType(Engine::None);
    SetHorsePower(0) ;
    SetVolume(0.0) ;
    SetCylinders(0) ;
    SetEuroStandart(Euro::None);
}
Vehicle::Vehicle(Engine newEngineType, int newHorsepower, double newVolume,int newCylinders,Euro newEuroStandart
:Vehicle(newName, newEGN, newPlateNumber, newRegDate, newColor)
{
    SetEngineType(newEngineType);
    SetHorsePower(newHorsepower) ;
    SetVolume(newVolume) ;
    SetCylinders(newCylinders) ;
    SetEuroStandart(newEuroStandart);
}
Vehicle::~Vehicle()
{
    //dtor
}

Vehicle::Vehicle(const Vehicle& other)
:VehicleInfo(other)
{
    SetEngineType(other.EngineType);
    SetHorsePower(other.HorsePower) ;
    SetVolume(other.Volume) ;
    SetCylinders(other.Cylinders) ;
    SetEuroStandart(other.EuroStandart);
}

Vehicle& Vehicle::operator=(const Vehicle& rhs)
{
    if (this == &rhs)
    {
    VehicleInfo::operator=(rhs);
    SetEngineType(rhs.EngineType);
    SetHorsePower(rhs.HorsePower) ;
    SetVolume(rhs.Volume) ;
    SetCylinders(rhs.Cylinders) ;
    SetEuroStandart(rhs.EuroStandart);
    }
    return *this;
}
//Getters
Engine Vehicle::GetEngineType() const
{
    return EngineType;
}
int Vehicle::GetHorsePower() const
{
    return HorsePower;
}
double Vehicle::GetVolume() const
{
    return Volume;
}
int Vehicle::GetCylinders() const
{
    return Cylinders;
}
Euro Vehicle::GetEuroStandart() const
{
    return EuroStandart;
}
//Setters
void Vehicle::SetEngineType(Engine newEngineType)
{
    EngineType=newEngineType;
}
void Vehicle::SetHorsePower(int newHorsePower)
{
    HorsePower=newHorsePower;
}
void Vehicle::SetVolume(double newVolume)
{
    Volume=newVolume;
}
void Vehicle::SetCylinders(int newCylinders)
{
    Cylinders=newCylinders;
}
void Vehicle::SetEuroStandart(Euro newEuroStandart )
{
    EuroStandart=newEuroStrandart;
}

double Vehicle::CalculateTaxRegion(double coefByRegion)
{
	int tax = 10;
	if (HorsePower > 100)
	{
		tax = 100;
	}

	return (tax + HorsePower) * coefByRegion;
}
