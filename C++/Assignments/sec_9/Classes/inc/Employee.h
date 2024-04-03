#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee
{
private:
    std::string name;
    static int counter_id;
    int emp_id;
    double salary;

public:
    virtual double get_total_salary();
    virtual void print();

    void Set_name(std::string name);
    void Set_salary(double salary);

    std::string get_name();
    int get_employee_id();
    double get_salary();

    Employee();
    Employee(std::string name, double salary);
};

#endif