#include "../inc/Person.h"

/*--------------------------------------------------------------------------------------*/
/*------------------------       constructors        -----------------------------------*/
Person::Person(std::string name, std::string gender, float age) : name(name), gender(gender), age(age) {}
Person::Person() : name(""), gender(""), age(0) {}
/*--------------------------------------------------------------------------------------*/
/*-----------------------------       Sets    ------------------------------------------*/
void Person::set_name(std::string name)
{
    this->name = name;
}
void Person::set_gender(std::string gender)
{
    this->gender = gender;
}
void Person::set_age(float age)
{
    this->age = age;
}
/*--------------------------------------------------------------------------------------*/
/*-----------------------------       Gets    ------------------------------------------*/
void Person::get_name(std::string &name)
{
    name = this->name;
}
void Person::get_gender(std::string &gender)
{
    gender = this->gender;
}
void Person::get_age(float &age)
{
    age = this->age;
}