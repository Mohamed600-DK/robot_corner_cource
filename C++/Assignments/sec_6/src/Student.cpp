
#include "../inc/Student.h"


/*--------------------------------------------------------------------------------------*/
/*------------------------       constructors        -----------------------------------*/
Student::Student(std::string name, std::string gender, float age, int student_level, float gpa) : Person(name, gender, age), student_level(student_level), gpa(gpa)
{
}

Student::Student() : Person(), student_level(1), gpa(0.0)
{
}
/*--------------------------------------------------------------------------------------*/
/*-----------------------------       Sets    ------------------------------------------*/
void Student::set_gpa(float gpa)
{
    this->gpa = gpa;
}
void Student::set_student_level(int student_level)
{
    this->student_level = student_level;
}
/*--------------------------------------------------------------------------------------*/
/*-----------------------------       Gets    ------------------------------------------*/
void Student::get_gpa(float &gpa)
{
    gpa = this->gpa;
}
void Student::get_student_level(int &student_level)
{
    student_level = this->student_level;
}