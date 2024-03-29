#ifndef PERSON_h
#define PERSON_h

#include <iostream>

typedef enum
{
    male,
    female
} Gender_t;

class Person
{
private:
    std::string name;
    Gender_t gender;
    int age;

public:
    // Sets
    void Set_name(std::string name);
    void Set_gender(Gender_t gender);
    void Set_age(int age);
    // Gets
    void Get_name(std::string &name);
    void Get_gender(Gender_t &gender);
    void Get_age(int &age);
    // contractor
    Person();
    Person(std::string name, Gender_t gender, int age);
};

#endif