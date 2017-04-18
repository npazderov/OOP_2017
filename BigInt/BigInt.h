

#include "String.h"
#include <iosfwd>

using namespace std;
enum Sign{negative,positive,null};
class BigInt
{
    public:

    BigInt(String data);
    BigInt();
    BigInt(const BigInt& other);
    String getData() const;
	void setData(String data);

    BigInt& operator=(const BigInt& other);


    ~BigInt();

    BigInt operator+(const BigInt& other);
    BigInt operator-(const BigInt& other);

    BigInt& operator+=(const BigInt& rhs);
    BigInt& operator-=(const BigInt& rhs);

    BigInt& operator++();
    BigInt& operator--();



    bool operator==(const BigInt& rhs);
    bool operator!=(const BigInt& rhs);
    friend ostream& operator<<(ostream& out, const BigInt& bigInt);
    friend istream& operator>>(istream& in, BigInt& bigInt);

    char* getValue() const;
//    Sign getSign() const;


    private:
        String data;
        Sign sign;
};
