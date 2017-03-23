#pragma once
#include <cstring>
using namespace std;
class String
{
public:
    String();
    String(char* data, size_t size);
    String(const String& other);
    String& operator=(const String&);
    ~String();

    void Print();

    char getAt(int index);
    void setAt(int index,char symbol);

    void concat(String other);
    void concat(char* other);

    const char* GetData()const;
 private:
     void copy(const String&);
     void destroy();


     char* data;
     size_t size;


};
