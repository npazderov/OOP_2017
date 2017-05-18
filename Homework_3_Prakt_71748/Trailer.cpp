#include "Trailer.h"

Trailer::Trailer()
    :VehicleInfo()
{
        setAxles(0);
        setMass(0);
}
Trailer::Trailer(String newName,int* newEGN,String newPlateNumber,String newRegDate,String newColor,
            int newAxles , int newMass)
            {
                setAxles(newAxles);
                setMass(newMass);

            }
Trailer::Trailer(const Trailer& other)
:VehicleInfo(other)
{
    setAxles(other.Axles);
    setMass(other.Mass);
}
Trailer& Trailer::operator=(const Trailer& rhs)
{
    if(this==&rhs)
    {
     VehicleInfo::operator=(rhs);
     setAxles(rhs.Axles);
     setMass(rhs.Mass);
    }
    return *this;
}
Trailer::~Trailer()
{

}

const int Trailer::getAxles()
{
    return Axles;
}
const int Trailer::getMass()
{
    return Mass;
}


void Trailer::setAxles(int newAxles)
{
    Axles =newAxles;
}
void Trailer::setMass(int newMass)
{
    Mass = newMass;
}
