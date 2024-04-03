#include "../inc/Employee.h"

int Employee::counter_id = 0;

double Employee::get_total_salary()
{
    return 0.0;
}
void Employee::print()
{
    std::cout<<"*---------------------------------------*"<<std::endl;
    std::cout<<"Name: "<<this->name<<std::endl;
    std::cout<<"ID: "<<this->emp_id<<std::endl;
    std::cout<<"Base Salary: "<<this->salary<<std::endl;
}

void Employee::Set_name(std::string name)
{
    this->name = name;
}

void Employee::Set_salary(double salary)
{
    this->salary = salary;
}
std::string Employee::get_name()
{
    return this->name;
}
int Employee::get_employee_id()
{
    return this->emp_id;
}
double Employee::get_salary()
{
    return this->salary;
}

Employee::Employee() : name(""), salary(0)
{
    this->counter_id++;
    this->emp_id = counter_id;
}
Employee::Employee(std::string name, double salary) : name(name), salary(salary)
{
    this->counter_id++;
    this->emp_id = counter_id;
}