#pragma once

class Treiler : public VehicleInfo{
public:
    Trailer();
    Trailer(String newName,int* newEGN,String newNomer,String newRegDate,String newColor,
            int newAxles , int newMass);
    Trailer(const Trailer& other);
    Trailer& operator=(const Trailer& rhs);
    ~Trailer();
//Getters
    const int getAxles();
    const int getMass();

//Setters
    void setAxles(int );
    void setMass(int );


private:
    int Axles ; //
    int Mass;


};
