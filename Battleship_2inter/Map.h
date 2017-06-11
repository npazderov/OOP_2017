
#pragma once
#include <iostream>
using namespace std;

class Map
{
protected:

	int numberOfShips;

public:
    char map[9][9];
    Map();

    bool collisionU(int _positionX, int _positionY, int _HP);
    bool collisionD(int _positionX, int _positionY, int _HP);
    bool collisionL(int _positionX, int _positionY, int _HP);
    bool collisionR(int _positionX, int _positionY, int _HP);
    void setAt(char val, int _positionX, int _positionY);

    bool checkAt(int _positionX, int _positionY);
    void printMap(); 
    bool chackAt();


    int getNumberOfShips() const;
    void setNumberOfShips(int numberOfShips);

};
