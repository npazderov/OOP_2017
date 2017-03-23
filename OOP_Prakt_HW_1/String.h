#pragma once
#include <cstring>
using namespace std;
class String
{


public:
    String();

    String(const char* Str);

    char* getStr();
    int getSize();

    void setStr(const char* Str);
    void setSize(int Size);

private:
    char* Str;
    int Size;
};
