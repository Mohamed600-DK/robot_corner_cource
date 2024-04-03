#include "../inc/Engineer.h"

void Engineer::set_overtime_hours(int overtime_hours)
{
    this->overtime_hours = overtime_hours;
}
void Engineer::set_overtime_hour_rate(float overtime_hour_rate)
{
    this->overtime_hour_rate = overtime_hour_rate;
}
void Engineer::Set_Specialty(std::string Specialty)
{
    this->Specialty = Specialty;
}
void Engineer::Set_exp(int exp)
{
    this->exp = exp;
}

int Engineer::get_overtime_hours()
{
    return this->overtime_hours;
}
float Engineer::get_overtime_hour_rate()
{
    return this->overtime_hour_rate;
}
std::string Engineer::get_Specialty()
{
    return this->Specialty;
}
int Engineer::get_exp()
{
    return this->exp;
}
double Engineer::get_total_salary()
{
    return this->get_salary() + (this->overtime_hours * this->overtime_hour_rate);
}
void Engineer::print()
{
    Employee::print();
    std::cout << "Specialty: " << this->Specialty << std::endl;
    std::cout << "Experience: " << this->exp << std::endl;
    std::cout << "Overtime Hours: " << this->overtime_hours << std::endl;
    std::cout << "Overtime Hour Rate: " << this->overtime_hour_rate << std::endl;
    std::cout << "Total Salary: " << this->get_total_salary() << std::endl;
    std::cout << "*---------------------------------------*" << std::endl;
}
Engineer::Engineer() : Employee(), Specialty(""), exp(0), overtime_hours(0), overtime_hour_rate(0.0)
{
}
Engineer::Engineer(std::string name, std::string Specialty, double salary, int exp, int overtime_hours, float overtime_hour_rate)
    : Employee(name, salary), Specialty(Specialty), exp(exp), overtime_hours(overtime_hours), overtime_hour_rate(overtime_hour_rate)
{
}