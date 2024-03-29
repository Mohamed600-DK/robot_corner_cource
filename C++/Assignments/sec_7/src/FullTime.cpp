#include "../inc/FullTime.hpp"

// Sets
void FullTime_Employee::Set_number_of_working_day(int number_of_working_day)
{
    this->number_of_working_day = number_of_working_day;
}
void FullTime_Employee::Set_attendance(int attendance)
{
    this->attendance = attendance;
}
// Gets
void FullTime_Employee::Get_number_of_working_day(int &number_of_working_day)
{
    number_of_working_day = this->number_of_working_day;
}
void FullTime_Employee::Get_attendance(int &attendance)
{
    attendance = this->attendance;
}
// contractor
FullTime_Employee::FullTime_Employee() : Employee(), number_of_working_day(0), attendance(0)
{
}
FullTime_Employee::FullTime_Employee(std::string name,
                                     Gender_t gender,
                                     int age,
                                     std::string title,
                                     float Salary,
                                     int number_of_working_day,
                                     int attendance) : Employee(name, gender, age, title, Salary),
                                                       number_of_working_day(number_of_working_day), 
                                                       attendance(attendance)
{
}
