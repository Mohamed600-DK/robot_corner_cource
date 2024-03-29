#ifndef EMPLOYEE_h
#define EMPLOYEE_h

#include "Person.hpp"

class Employee : Person
{
private:
    std::string title;
    float Salary;

public:
    // Sets
    void Set_title(std::string title);
    void Set_salary(float Salary);
    // Gets
    void Get_title(std::string &title);
    void Get_salary(float &Salary);
    // contractor
    Employee();
    Employee(std::string name, Gender_t gender, int age, std::string title, float Salary);
};

#endif