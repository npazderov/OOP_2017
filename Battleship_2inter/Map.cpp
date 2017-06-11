
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

void Map::setAt(char val, int _pX, int _pY)
{
    map[_pX][_pY] = val;
}

bool Map::checkAt(int _pX, int _pY)
{
    if (map[_pX][_pY] != 0)
        return false;
    else
        return true;
}

bool Map::collisionU(int _pX, int _pY, int _HP)
{
    for (size_t i = _pY; i < _HP; i++)
    {
        if (checkAt(_pX, _pY - i) == true)
            {
                return true;
            }
    }

    return false;
}
bool Map::collisionD(int _pX, int _pY, int _HP)
{
    for (size_t i = _pY; i < _HP; i++)
    {
        if (checkAt(_pX, _pY + i) == true)
            {
                return true;
            }
    }

    return false;
}

bool Map::collisionL(int _pX, int _pY, int _HP)
{
    for (size_t i = _pX; i < _HP; i++)
    {
        if (checkAt(_pX - i, _pY) == true)
            {
                return true;
            }
    }

    return false;
}

bool Map::collisionR(int _pX, int _pY, int _HP)
{
    for (size_t i = _pX; i < _HP; i++)
    {
        if (checkAt(_pX + i, _pY) == true)
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
