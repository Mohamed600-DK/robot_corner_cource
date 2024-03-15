#include "../inc/Employee.h"

/*--------------------------------------------------------------------------------------*/
/*------------------------       constructors        -----------------------------------*/
Employee::Employee() : Person(), Salary(0), Rank(0), jop("") {}
Employee::Employee(std::string name, std::string gender, float age, float Salary, int Rank, std::string jop) : Person(name, gender, age), Salary(Salary), Rank(Rank), jop(jop) {}
/*-----------------------------       Sets    ------------------------------------------*/
void Employee::set_Salary(float Salary)
{
    this->Salary = Salary;
}
void Employee::set_Rank(int Rank)
{
    this->Rank = Rank;
}
void Employee::set_jop(std::string jop)
{
    this->jop = jop;
}
/*--------------------------------------------------------------------------------------*/
/*-----------------------------       Gets    ------------------------------------------*/
void Employee::get_Salary(float &Salary)
{
    Salary = this->Salary;
}
void Employee::get_Rank(int &Rank)
{
    Rank = this->Rank;
}
void Employee::get_jop(std::string &jop)
{
    jop = this->jop;
}