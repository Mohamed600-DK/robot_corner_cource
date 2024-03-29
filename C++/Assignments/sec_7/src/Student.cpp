#include "../inc/Student.hpp"

// Sets
void Student::Set_Level(int Level)
{
    this->Level = Level;
}
void Student::Set_GPA(float GPA)
{
    this->GPA = GPA;
}
// Gets
void Student::Get_Level(int &Level)
{
    Level = this->Level;
}
void Student::Get_GPAr(float &GPA)
{
    GPA = this->GPA;
}
// contractor
Student::Student() : Person(), Level(0), GPA(0)
{
}
Student::Student(std::string name, Gender_t gender, int age, int Level, float GPA) : Person(name, gender, age), Level(Level), GPA(GPA)
{
}