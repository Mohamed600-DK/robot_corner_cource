#ifndef HOURS_h
#define HOURS_h

#include "Employee.hpp"

class Hours_Employee : Employee
{
private:
    int working_hour;

public:
    // Sets
    void Set_number_of_working_day(int working_hour);
    // Gets
    void Get_number_of_working_day(int &working_hour);
    // contractor
    Hours_Employee();
    Hours_Employee(std::string name, Gender_t gender, int age, std::string title, float Salary, int working_hour);
};

#endif