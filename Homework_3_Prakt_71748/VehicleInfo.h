#ifndef VEHICLEINFO_H
#define VEHICLEINFO_H
#include "String.h"

class VehicleInfo
{
    public:
        VehicleInfo();
        VehicleInfo(String newName,int* newEGN,String newPlateNumber,String newRegDate,String newColor);
        ~VehicleInfo();
        VehicleInfo(const VehicleInfo& other);
        VehicleInfo& operator=(const VehicleInfo& other);

        //Getters
        String GetName() const;
        int* GetEGN() const;
        String GetPlateNumber() const;
        String GetRegDate() const;
        String GetColor() const;

        //Setters
        void SetName(String ) ;
        void SetEGN(const int* ,int Size);
        void SetPlateNumber(String) ;
        void SetRegDate(String );
        void SetColor(String ) ;
        //Other methods
        double CalculateGO(double coefByRegion);

    protected:

    private:
        String Name;
        int EGN[10];
        String PlateNumber;
        String RegDate;
        String Color;
};

#endif // VEHICLEINFO_H
