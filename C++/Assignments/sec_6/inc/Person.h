#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person
{
private:
    std::string name;
    std::string gender;
    float age;

public:
/*--------------------------------------------------------------------------------------*/
/*------------------------       constructors        -----------------------------------*/
    Person(std::string n, std::string g, float a);
    Person();
/*--------------------------------------------------------------------------------------*/
/*-----------------------------       Sets    ------------------------------------------*/
    void set_name(std::string name);
    void set_gender(std::string gender);
    void set_age(float age);
/*--------------------------------------------------------------------------------------*/
/*-----------------------------       Gets    ------------------------------------------*/
    void get_name(std::string &name);
    void get_gender(std::string &gender);
    void get_age(float &age);
};

#endif