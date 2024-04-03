#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"

class Sales : public Employee
{
private:
    float commercial_rate;
    float gross_sales;

public:
    void set_gross_sales(float gross_sales);
    void set_comm_rate(float commercial_rate);

    float get_gross_sales();
    float get_comm_rate();
    double get_total_salary();
    void print();

    Sales();
    Sales(std::string name, double salary,float gross_sales, float commercial_rate);


};

#endif