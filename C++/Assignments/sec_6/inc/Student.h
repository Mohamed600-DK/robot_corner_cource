#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Person.h"

class Student : public Person
{
private:
    int student_level;
    float gpa;

public:
/*--------------------------------------------------------------------------------------*/
/*------------------------       constructors        -----------------------------------*/
    Student();
    Student(std::string name, std::string gender, float age, int student_level, float gpa);
/*--------------------------------------------------------------------------------------*/
/*-----------------------------       Sets    ------------------------------------------*/
    void set_gpa(float gpa);
    void set_student_level(int student_level);
/*--------------------------------------------------------------------------------------*/
/*-----------------------------       Gets    ------------------------------------------*/
    void get_gpa(float &gpa);
    void get_student_level(int &student_level);

};

#endif