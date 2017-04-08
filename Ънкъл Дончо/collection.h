#ifndef COLLECTION_H
#define COLLECTION_H
#include "cassette.h"
#include <iostream>
class Collection
{
	public:
		Collection(Cassette* newcassette, size_t numberofCassettes);
		Collection();
		~Collection();
		Collection(const Collection& other);
		Collection& operator=(const Collection& other);
		
		//Getters
		const Cassette* getCassettes() const;
		size_t getNumberOfCassettes() const;
		size_t getCapacity () const;
		
		//Setters
		void SetCassettes(const Cassette* newCassettes, size_t numberofCassettes);
		void SetCapacity( size_t newCapacity );
		void AddCassette(const Cassette&);
		double TotalLenght() const;
		size_t CountOfCassettesOfGenre(const char*) const;
		size_t CountOfCassettesOfName(const char*) const;
	private:
		Cassette* cassette;
		size_t numberofCassettes;
		size_t capacity;
};

#endif // COLLECTION_H
