#ifndef Employee_H
#define Employee_H

#include <iostream>
#include "Person.h"

class Employee : public Person
{
private:
    float Salary;
    int Rank;
    std::string jop;

public:
/*--------------------------------------------------------------------------------------*/
/*------------------------       constructors        -----------------------------------*/
    Employee();
    Employee(std::string name, std::string gender, float age, float Salary, int Rank,std::string jop);
/*--------------------------------------------------------------------------------------*/
/*-----------------------------       Sets    ------------------------------------------*/
    void set_Salary(float Salary);
    void set_Rank(int Rank);
    void set_jop(std::string jop);
/*--------------------------------------------------------------------------------------*/
/*-----------------------------       Gets    ------------------------------------------*/
    void get_Salary(float &Salary);
    void get_Rank(int &Rank);
    void get_jop(std::string &jop);

};

#endif