#ifndef VEHICLE_H
#define VEHICLE_H

#include <VehicleInfo.h>
//Създавам клас Vehicle,който ще бъде наследен от всички други , по простата причина,
//че има еднакви характеристики с изключение на това, какъв тип е превозното средство
enum class Engine{None,Petrol,Gas,Diesel,Hybrid};
enum class Euro{None,Euro1,Euro2,Euro3,Euro4,Euro5,Euro6};

class Vehicle : public VehicleInfo
{
    public:
        Vehicle();
        Vehicle(String newName,int* newEGN,String newPlateNumber,String newRegDate,String newColor,
                Engine newEngineType, int newHorsepower, double newVolume,int newCylinders,Euro newEuroStandart);
        ~Vehicle();
        Vehicle(const Vehicle& other);
        Vehicle& operator=(const Vehicle& other);
    //Getters
        Engine GetEngineType() const;
        int GetHorsePower() const;
        double GetVolume() const;
        int GetCylinders() const;
        Euro GetEuroStandart() const;

    //Setters
        void SetEngineType(Engine );
        void SetHorsePower(int ) ;
        void SetVolume(double ) ;
        void SetCylinders(int ) ;
        void SetEuroStandart(Euro );
    //Other methods
     double CalculateTaxRegion(double coefByRegion);
    protected:

    private:
        Engine EngineType;
        int HorsePower;
        double Volume;
        int Cylinders;
        Euro EuroStandart;
};

#endif // VEHICLE_H
