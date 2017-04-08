#include "cassette.h"
#include <cstring>

Cassette::Cassette(int year, const char* name, char* genre, double duration)
	:name(NULL), genre(NULL)
{
	Setduration(duration); 
	SetName(name);
	Setgenre(genre);
	Setyear(year);  
	
}

Cassette::Cassette()
{
	 year=0;
	 name=NULL;
	 genre=NULL;
	 duration=0.0;
}
Cassette::~Cassette()
{
	delete[] name;
	delete[] genre;
}

Cassette::Cassette(const Cassette& other)
	:name(NULL), genre(NULL)
{
	Setduration(other.duration ); 
	SetName(other.name);
	Setgenre(other.genre );
	Setyear(other.year);  
}

Cassette& Cassette::operator=(const Cassette& rhs)
{
	if (this == &rhs)
	{	
		Setduration(rhs.duration ); 
		SetName(rhs.name);
		SetName(rhs.name);
		Setgenre(rhs.genre );
		Setyear(rhs.year);  
		
	}
	return *this;
}

//Getters
int Cassette::Getyear() const
{
	return year;
}

char* Cassette::GetName() const
{
	return name;
}

char* Cassette::getGenre() const
{
	return genre;
}
double Cassette::Getduration() const
{
	return duration;
}

//Setters
void Cassette::Setduration(double newDuration) 
{
	duration=newDuration;
}
void Cassette::SetName(const char* newName)
{
	delete[] name;
	if(newName != NULL)
	{
		size_t len = strlen(newName);
		if(strlen(newName)!= 0)
		{
			name=new char[len+1];
			strcpy(name,newName);
		}
		else
		{
			name= new char[1];
			name[0]= '\0';
		}
	}
}
	
void Cassette::Setgenre(char* newgenre)
{
	delete[] genre;
	if(newgenre != NULL)
	{
		size_t len = strlen(newgenre);
		if(strlen(newgenre)!= 0)
		{
			genre=new char[len+1];
			strcpy(genre,newgenre);
		}
		else
		{
			genre= new char[1];
			genre[0]= '\0';
		}
	}
}
		
void Cassette::Setyear(int newYear)
{
	year=newYear;
}
