#include "../inc/Hours.hpp"

// Sets
void Hours_Employee::Set_number_of_working_day(int working_hour)
{
    this->working_hour = working_hour;
}
// Gets
void Hours_Employee::Get_number_of_working_day(int &working_hour)
{
    working_hour = this->working_hour;
}
// contractor
Hours_Employee::Hours_Employee() : Employee(), working_hour(0)
{
}
Hours_Employee::Hours_Employee(std::string name,
                               Gender_t gender,
                               int age,
                               std::string title,
                               float Salary,
                               int working_hour) : Employee(name, gender, age, title, Salary), working_hour(working_hour)
{
}
