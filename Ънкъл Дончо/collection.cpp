#include "collection.h"
#include <cstring>
Collection::Collection(Cassette* newcassette, size_t numberofCassettes)
	:cassette(NULL)
{
	SetCassettes(newcassette, numberofCassettes);
}


Collection::Collection()
{
	cassette=NULL;
	numberofCassettes=0;
}

Collection::~Collection()
{
	delete[] cassette;
}

Collection::Collection(const Collection& other)
	:cassette(NULL)
{
	SetCassettes(other.cassette,other.numberofCassettes);
	SetCapacity(other.capacity);
}

Collection& Collection::operator=(const Collection& rhs)
{
	if (this == &rhs) 
	{
		SetCassettes(rhs.cassette,rhs.numberofCassettes);
		SetCapacity(rhs.capacity);
	}
	return *this;
}

void Collection::SetCassettes(const Cassette* newCassettes, size_t newNumberofCassettes)
{
	delete[] cassette;
	
	if(newCassettes != NULL && newNumberofCassettes > 0)
	{
		capacity= numberofCassettes=newNumberofCassettes;
		cassette= new Cassette[newNumberofCassettes];
		for(size_t i=0; i < numberofCassettes ; i++)
		{
			cassette[i]=newCassettes[i];
		}
	}
	else
	{
		cassette= NULL;
		numberofCassettes=0;
		capacity=0;
	}
}
void Collection::SetCapacity(size_t newCapacity)
{
	if(newCapacity>capacity)
	{
		capacity=newCapacity;
		Cassette* newcassettes = new Cassette[capacity];
		for(size_t i=0; i< numberofCassettes; i++)
		{
			newcassettes[i]= cassette[i];
		}
		delete [] cassette;
		cassette= newcassettes;
	}
}
size_t Collection::CountOfCassettesOfGenre(const char* genre)const
{
	size_t countCassettes=0;
	if(genre == NULL)
	{
		return countCassettes;
	}
	
	for(size_t i=0; i < numberofCassettes; i++)
	{
		if(strcmp(cassette[i].getGenre(),genre)==0)
		{
			countCassettes++;
		}
	}
	return countCassettes;
}
	
size_t Collection::CountOfCassettesOfName(const char* Name) const
{
	size_t countCassettes=0;
	if(Name == NULL)
	{
		return countCassettes;
	}
	
	for(size_t i=0; i < numberofCassettes; i++)
	{
		if(strcmp(cassette[i].GetName(),Name)==0)
		{
			countCassettes++;
		}
	}
	return countCassettes;
}
double Collection::TotalLenght() const
{
	double totalLen=0.0;
	for(size_t i =0; i<numberofCassettes;i++)
	{
		totalLen += cassette[i].Getduration();
	}
	return totalLen;
}

void Collection::AddCassette(const Cassette& newCassette)
{
	if (( numberofCassettes+1)>capacity)
	{
		SetCapacity(numberofCassettes*2);
	}
	cassette[numberofCassettes]=newCassette;
	numberofCassettes++;
}
