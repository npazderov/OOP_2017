
#include "Map.h"

Map::Map()
{
	for (int i = 0; i<10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "  .  "<< field[i][j];
		}
	}

}
Map::Map(const char field, int numberOfShips)
{
    this -> numberOfShips = numberOfShips;
}

int Map::getNumberOfShips() const
{
    return numberOfShips;
}
void Map::setNumberOfShips(int numberOfShips)
{
    this -> numberOfShips = numberOfShips;
}





