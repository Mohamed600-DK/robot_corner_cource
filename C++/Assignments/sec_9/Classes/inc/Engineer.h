#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"

class Engineer : public Employee
{
private:
    std::string Specialty;
    int exp;
    int overtime_hours;
    float overtime_hour_rate;

public:
    void set_overtime_hours(int overtime_hours);
    void set_overtime_hour_rate(float overtime_hour_rate);
    void Set_Specialty(std::string Specialty);
    void Set_exp(int exp);

    int get_overtime_hours();
    float get_overtime_hour_rate();
    std::string get_Specialty();
    int get_exp();
    double get_total_salary();
    void print();

    Engineer();
    Engineer(std::string name, std::string Specialty, double salary,int exp, int overtime_hours, float overtime_hour_rate);


};

#endif