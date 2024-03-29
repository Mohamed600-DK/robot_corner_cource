#ifndef FULLTIME_h
#define FULLTIME_h

#include "Employee.hpp"

class FullTime_Employee : Employee
{
private:
    int number_of_working_day;
    int attendance;

public:
    // Sets
    void Set_number_of_working_day(int number_of_working_day);
    void Set_attendance(int attendance);
    // Gets
    void Get_number_of_working_day(int &number_of_working_day);
    void Get_attendance(int &attendance);
    // contractor
    FullTime_Employee();
    FullTime_Employee(std::string name, Gender_t gender, int age, std::string title, float Salary, int number_of_working_day, int attendance);
};

#endif