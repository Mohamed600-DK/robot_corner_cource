#include "../inc/Sales.h"

void Sales::set_gross_sales(float gross_sales)
{
    this->gross_sales = gross_sales;
}
void Sales::set_comm_rate(float commercial_rate)
{
    this->commercial_rate = commercial_rate;
}

float Sales::get_gross_sales()
{
    return this->gross_sales;
}
float Sales::get_comm_rate()
{
    return this->commercial_rate;
}
double Sales::get_total_salary()
{
    return this->get_salary() + (this->gross_sales * this->commercial_rate);
}
void Sales::print()
{
    Employee::print();
    std::cout << "Gross Sales: " << this->gross_sales << std::endl;
    std::cout << "Commercial Rate: " << this->commercial_rate << std::endl;
    std::cout << "Total Salary: " << this->get_total_salary() << std::endl;
    std::cout << "*---------------------------------------*" << std::endl;
}

Sales::Sales() : Employee(), gross_sales(0.0), commercial_rate(0.0)
{
}
Sales::Sales(std::string name, double salary, float gross_sales, float commercial_rate)
    : Employee(name, salary), gross_sales(gross_sales), commercial_rate(commercial_rate)
{
}