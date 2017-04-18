#include "BigInt.h"

BigInt::BigInt()
{
	String number;
	//char sign;
}

BigInt::BigInt(String number)
{
	if (sign == '-')
	{
		number =- data;
	}
	else
		number = data;
}
String BigInt::getData()const
{
	return data;
}
void BigInt::setData(String newData)
{
	data = newData;
}

BigInt::~BigInt()
{
	if (data != nullptr)
	{
		delete data;
	}
}
BigInt& BigInt:: operator+=(const BigInt& rhs)
{
	data += rhs.data;
	return*this;
}
BigInt BigInt::operator+(const BigInt& rhs)
{
	return BigInt(*this) += rhs;
}
BigInt& BigInt::operator-=(const BigInt& rhs)
{
	data -= rhs.data;
	return *this;
}
BigInt BigInt::operator-(const BigInt& rhs)
{
	return BigInt(*this) -= rhs;
}

BigInt& BigInt::operator++()
{
	BigInt old(*this);
	++(*this);
	return old;
}
BigInt& BigInt::operator--()
{
	BigInt old(*this);
	--(*this);
	return old;
}

bool BigInt::operator!=(const BigInt& rhs)
{
	return !(*this == rhs);
}

bool BigInt::operator==(const BigInt& rhs)
{
	return (*this==rhs);
}
/*
std::ostream& operator<<(ostream& os, const BigInt& rhs)
{
	if (data[0] == '-')
	{
		os << "-";
	}

	os << rhs;
	return os;
}

std::istream& operator>>(istream& is, BigInt& rhs)
{

}
*/
