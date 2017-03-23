#include "String.h"

 void String::copy(const String& other)
 {
     this ->data=new char[strlen(other.data)+1];
     strcpy(this -> data , other.data);
     this->size= other.size;

}
void String::destroy()
{
    delete[] this -> data;
    this->size = 0;
}

String::String(const String& other)
{
    copy(other);
}

String& String :: operator= (const String& other)
{
    if(this != &other)
    {
        destroy();
        copy(other);
    }
    return *this;
}
String::String()
{
    this -> data = nullptr;
    this -> size = 0;
}

String::String(char* data, size_t size)
{
    this -> data= new char[strlen(data)+1];
    strcpy(this->data,data);
    this->size = size;
}
String::~String()
{
    destroy();
}

void  String:: Print()
{
    cout<<this->data<<endl;
    cout<<this->size<<endl;
}
