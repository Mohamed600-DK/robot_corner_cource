#ifndef STUDENT_h
#define STUDENT_h

#include "Person.hpp"

class Student : Person
{
private:
    int Level;
    float GPA;

public:
    // Sets
    void Set_Level(int Level);
    void Set_GPA(float GPA);
    // Gets
    void Get_Level(int &Level);
    void Get_GPAr(float &GPA);
    // contractor
    Student();
    Student(std::string name, Gender_t gender, int age, int Level, float GPA);
};

#endif