#ifndef TRUCK_H
#define TRUCK_H

#include <Vehicle.h>
enum class TruckType{Default,Trailer,Special};

class Truck : public Vehicle
{
    public:
        Truck();
        Truck(String newName,int* newEGN,String newCarPlate,String newRegDate,String newColor,
                Engine newTypeEngine , int newHorsePower , double newVolume ,int newCylinders ,Euro newEuroStandart,
                TruckType newTruckType);
        ~Truck();
        Truck(const Truck& other);
        Truck& operator=(const Truck& other);

        void SeteTruckType(TruckType);

    protected:

    private:
        TruckType eTruckType;
};

#endif // TRUCK_H
