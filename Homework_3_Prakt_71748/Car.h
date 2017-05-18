#ifndef CAR_H
#define CAR_H

#include <Vehicle.h>
enum class CarType{None,Hatchback,Sedan,Combi,Cabriolet,LiftBack};

class Car : public Vehicle
{
    public:
        Car();
        Car(String newName,int* newEGN,String newCarPlate,String newRegDate,String newColor,
                Engine newTypeEngine , int newHorsePower , double newVolume ,int newCylinders ,Euro newEuroStandart,
                CarType newCarType);
        ~Car();
        Car(const Car& other);
        Car& operator=(const Car& other);

//Setter
        void SeteCarType(CarType);

    protected:

    private:
        CarType eCarType;
};

#endif // CAR_H
