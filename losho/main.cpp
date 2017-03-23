#include <iostream>
#include "String.cpp"
using namespace std;

int main()
{
    String s1("dsada",6);
    s1.Print();

    String s2=s1;
    s2.Print();

    String s3(s2);
    s3.Print();

return 0;
}
