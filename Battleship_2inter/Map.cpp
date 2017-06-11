
#include "Map.h"
#include <iostream>

using namespace std;

Field::Field()
{
    for (size_t i = 0; i < 9 ; i++)
        {field[0][i] = (char)i + 1;}

    for (size_t i = 0; i < 9; i++)
        {field[i][0] = (char)i + 1;}

    for (size_t i = 1; i < 9; i++)
    {
        for (size_t j = 1; j < 9; j++)
        {
            field[i][j] = '.';
        }
    }
}

void Field::setAt(char val, int _pX, int _pY)
{
    field[_pX][_pY] = val;
}

bool Field::checkAt(int _pX, int _pY)
{
    if (field[_pX][_pY] != 0)
        return false;
    else
        return true;
}

bool Field::collisionU(int _pX, int _pY, int _HP)
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
bool Field::collisionD(int _pX, int _pY, int _HP)
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

bool Field::collisionL(int _pX, int _pY, int _HP)
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

bool Field::collisionR(int _pX, int _pY, int _HP)
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

void Field::printField()
{
    for (size_t i = 0; i < 9; i++)
    {
        cout << "   " << endl;
        for (size_t j = 0; j < 9; j++)
        {
            cout << field[i][j] << "    ";
        }
    }
}
