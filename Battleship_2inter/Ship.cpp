#include "Ship.h"

Ship::Ship()
{
    hp = 0;
    ID = '.';
    positionX = 0;
    positionY = 0;
}
Ship::Ship( int newHp, char newID, int newPositionX, int newPositionY)
{
    hp = newHp;
    ID = newID;
    positionX = newPositionX;
    positionY = newPositionY;
}

Ship::Ship(const Ship& other)
{
    hp = other.hp;
    ID = other.ID;
    positionX = other.positionX;
    positionY = other.positionY;
}

Ship& Ship::operator=(const Ship& rhs)
{
    if (this == &rhs) 
    {
    hp = rhs.hp;
    ID = rhs.ID;
    positionX = rhs.positionX;
    positionY = rhs.positionY;
    }
    return *this;

}
int Ship::getHp() const
{
    return hp;
}
char Ship::getID()const
{
    return ID;
}
int Ship::getPositionX() const
{
    return positionX;
}

int Ship::getPositionY() const
{
    return positionY;
}
void Ship::setHP(int _HP)
{
    hp = _HP;
}

void Ship::setID(char _ID)
{
    ID = _ID;
}

void Ship::place(int _positionX, int _positionY)
{
    char userOrientation;
    if ((_positionX >= 0 && _positionX <= 7) && (_positionY >= 0 && _positionY <= 7))
    {
        do
        {
            cout << "Enter U / D / L / R for orientation of the Ship:";
            cin >> userOrientation;
            if (userOrientation == 'U')
            {
                if (_positionY >= this->getHp())
                {
                    if(collisionU(_positionX, _positionY, this->getHp() == false))
                       {
                        for (size_t i = _positionY; i < this->getHp(); i++)
                            {
                                setAt(_positionX, _positionY - i, this->getID());
                            }
                       }
                    else
                    {
                        cout << "There is a ship on one of the positions. Try again..." << endl;
                    }
                }
            }
            if (userOrientation == 'D')
            {
                if (_positionY <= this->getHp())
                {
                    if(collisionD(_positionX, _positionY, this->getHp() == false))
                       {
                        for (size_t i = _positionY; i < this->getHp(); i++)
                            {
                                setAt(_positionX, _positionY + i, this->getID());
                            }
                       }
                    else
                    {
                        cout << "There is a ship on one of the positions. Try again..." << endl;
                    }
                }
            }
            if (userOrientation == 'L')
            {
                if (_positionX >= this->getHp())
                {
                    if(collisionL(_positionX, _positionY, this->getHp() == false))
                       {
                        for (size_t i = _positionX; i < this->getHp(); i++)
                            {
                                setAt(_positionX - i, _positionY, this->getID());
                            }
                       }
                    else
                    {
                        cout << "There is a ship on one of the positions. Try again..." << endl;
                    }
                }
            }
            if (userOrientation == 'R')
            {
                if (_positionX <= this->getHp())
                {
                    if(collisionR(_positionX, _positionY, this->getHp() == false))
                       {
                        for (size_t i = _positionX; i < this->getHp(); i++)
                            {
                                setAt(_positionX + i, _positionY, this->getID());
                            }
                       }
                    else
                    {
                        cout << "There is a ship on one of the positions. Try again..." << endl;
                    }
                }
            }
            break;
        }
        while (true);
    }
}
void Ship::attack(Map& _map,  Map & _map2, int _playerHP)
 {
    int _positionX, _positionY;
    cout<< "Please enter coordinate for attack"<<endl;
    cin >> _positionX >> _positionY;
    if(_map.checkAt(_positionX,_positionY))
    {
        cout<<"It's a miss"<<endl;
        _map2.setAt('O', _positionX, _positionY);
    }
    else if(!_map.checkAt(_positionX,_positionY))
    {
        cout << "You hit a ship!"<<endl;
        _map2.setAt('X', _positonX, _positionY);
        hit(_playerHP);

    }

 }

 void Ship::hit(int _playerHP)
 {
     _playerHP--;
 }
