#include <iostream>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle():length(0),width(0)
{

};
Rectangle::Rectangle(float length,float width):length(length),width(width)
{

};
Rectangle::~Rectangle()
{
    cout<<"the lifetime of the instance is ended"<<endl;
}
// Sets
void Rectangle::Set_width(float width)
{
    if(width>=0)
    {
        this->width=width;
    }
    else
    {
        cout<<"invalid width"<<endl;
    }
}
void Rectangle::Set_length(float length)
{
    if(length>=0)
    {
        this->length=length;
    }
    else
    {
        cout<<"invalid length"<<endl;
    }
}
// Gets
float Rectangle::get_width(void)
{
    return this->width;
}
float Rectangle::get_length(void)
{
    return this->length;
}
float Rectangle::get_area(void)
{
    return this->width*this->length;
}