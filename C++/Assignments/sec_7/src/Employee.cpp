#include "../inc/Employee.hpp"

// Sets
void Employee::Set_title(std::string title)
{
    this->title = title;
}
void Employee::Set_salary(float Salary)
{
    this->Salary = Salary;
}
// Gets
void Employee::Get_title(std::string &title)
{
    title = this->title;
}
void Employee::Get_salary(float &Salary)
{
    Salary = this->Salary;
}
// contractor
Employee::Employee() : Person(), title(""), Salary(0){};
Employee::Employee(std::string name, Gender_t gender, int age, std::string title, float Salary) : Person(name, gender, age), title(title), Salary(Salary){};