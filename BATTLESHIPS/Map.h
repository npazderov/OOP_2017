#pragma once
#include <iostream>
using namespace std;

class Map
{
private:
    char field[10][10];
	int numberOfShips;

public:
    Map();
    Map(const char field, int numberOfShips);

    bool getField();
    int getNumberOfShips() const ;

    void setField(bool field);
    void setNumberOfShips(int numberOfShips);
};
