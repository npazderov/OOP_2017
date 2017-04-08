#ifndef CASSETTE_H
#define CASSETTE_H

//Sorry , che ne se kazva VideoRecord, ne oburnah vnimanie v nachaloto
class Cassette
{
	public:
		Cassette();
		Cassette(int year, const char* name, char* genre, double duration);
		~Cassette();
		Cassette(const Cassette& other);
		Cassette& operator=(const Cassette& other);
		
		
		//Getters
		int Getyear() const;
		char* GetName() const;
		char* getGenre() const;
		double Getduration() const;
		
		//Setters 
		void Setduration(double ) ;
		void SetName(const char*);
		void Setgenre(char* );
		void Setyear(int )  ;
	
	private:
		int year;
		char* name;
		char* genre;
		double duration;
};

#endif // CASSETTE_H
