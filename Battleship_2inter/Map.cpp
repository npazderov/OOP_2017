
#include "Map.h"
#include <iostream>

using namespace std;

Map::Map()
{
    for (size_t i = 0; i < 9 ; i++)
        {map[0][i] = (char)i + 1;}

    for (size_t i = 0; i < 9; i++)
        {map[i][0] = (char)i + 1;}

    for (size_t i = 1; i < 9; i++)
    {
        for (size_t j = 1; j < 9; j++)
        {
            map[i][j] = '.';
        }
    }
}

void Map::setAt(char val, int _positionX, int _positionY)
{
    map[_positionX][_positionY] = val;
}

bool Map::checkAt(int _positionX, int _positionY)
{
    if (map[_positionX][_positionY] != 0)
        return false;
    else
        return true;
}

bool Map::collisionU(int _positionX, int _positionY, int _HP)
{
    for (size_t i = _positionY; i < _HP; i++)
    {
        if (checkAt(_positionX, _positionY - i) == true)
            {
                return true;
            }
    }

    return false;
}
bool Map::collisionD(int _positionX, int _positionY, int _HP)
{
    for (size_t i = _positionY; i < _HP; i++)
    {
        if (checkAt(_positionX, _positionY + i) == true)
            {
                return true;
            }
    }

    return false;
}

bool Map::collisionL(int _positionX, int _positionY, int _HP)
{
    for (size_t i = _positionX; i < _HP; i++)
    {
        if (checkAt(_positionX - i, _positionY) == true)
            {
                return true;
            }
    }

    return false;
}

bool Map::collisionR(int _positionX, int _positionY, int _HP)
{
    for (size_t i = _positionX; i < _HP; i++)
    {
        if (checkAt(_positionX + i, _positionY) == true)
            {
                return true;
            }
    }

    return false;
}

void Map::printMap()
{
    for (size_t i = 0; i < 9; i++)
    {
        cout << "   " << endl;
        for (size_t j = 0; j < 9; j++)
        {
            cout << map[i][j] << "    ";
        }
    }
}
