#include"../inc/Person.hpp"



// Sets
void Person::Set_name(std::string name)
{
    this->name=name;
}
void Person::Set_gender(Gender_t gender)
{
    this->gender=gender;
}
void Person::Set_age(int age)
{
    this->age=age;
}
// Gets
void Person::Get_name(std::string &name)
{
    name=this->name;
}
void Person::Get_gender(Gender_t &gender)
{
    gender=this->gender;
}
void Person::Get_age(int &age)
{
    age=this->age;
}
// contractor
Person::Person():name(""),gender(male),age(0)
{};
Person::Person(std::string name, Gender_t gender, int age):name(name),gender(gender),age(age)
{};