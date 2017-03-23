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
 private:
     void copy(const String&);
     void destroy();


     char* data;
     size_t size;


};
