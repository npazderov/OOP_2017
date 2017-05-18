#include "VehicleInfo.h"

VehicleInfo::VehicleInfo()
{
    SetName(nullptr);
    SetEGN(nullptr,0);
    SetPlateNumber(nullptr);
    SetRegDate(nullptr);
    SetColor(nullptr);
}
VehicleInfo::VehicleInfo(String newName,int* newEGN,String newPlateNumber,String newRegDate,String newColor)
{
    SetName(newName);
    SetEGN(newEGN,10);
    SetPlateNumber(newPlateNumber);
    SetRegDate(newRegDate);
    SetColor(newColor);
}

VehicleInfo::~VehicleInfo()
{
    delete [] Name;
    delete [] PlateNumber;
    delete [] RegDate;
    delete [] Color;
}

VehicleInfo::VehicleInfo(const VehicleInfo& other)
{
    SetName(other.Name);
    SetEGN(other.EGN,10);
    SetPlateNumber(other.PlateNumber);
    SetRegDate(other.RegDate);
    SetColor(other.Color);
}

VehicleInfo& VehicleInfo::operator=(const VehicleInfo& rhs)
{
    if (this == &rhs)
    {
        SetName(rhs.Name);
        SetEGN(rhs.EGN,10);
        SetPlateNumber(rhs.PlateNumber);
        SetRegDate(rhs.RegDate);
        SetColor(rhs.Color);

    }
    return *this;
}
//Getters
String VehicleInfo::GetName() const
{
    return Name;
}
int* VehicleInfo::GetEGN() const
{
    return EGN;
}
String VehicleInfo::GetPlateNumber() const
{
    return PlateNumber;
}
String VehicleInfo::GetRegDate() const
{
    return RegDate;
}
String VehicleInfo::GetColor() const
{
    return Color;
}
//Setters
void VehicleInfo::SetName(String newName)
{
    Name=newName;
}
void VehicleInfo::setEGN(const int* _EGN,int Size)
{
        for(int i = 0 ;i<Size;i++)
        {
            EGN[i] = _EGN[i];
        }
}
void VehicleInfo::SetPlateNumber(String newPlateNumber)
{
    PlateNumber=newPlateNumber;
}
void VehicleInfo::SetRegDate(String newRegDate)
{
    RegDate=newRegDate;
}
void VehicleInfo::SetColor(String newColor)
{
    Color=newColor;
}

double VehicleInfo::CalculateGO( double coefByRegion)
{
    int age = 117 - (EGN[0]*10 + EGN[1]);
	int taxByAge;
	if (age < 30)
	{
		taxByAge = 40;
	}
	else if (age < 40)
	{
		taxByAge = 30;
	}
	else
	{
		taxByAge = 20;
	}

	return (50 + taxByAge) * coefByRegion;
}
