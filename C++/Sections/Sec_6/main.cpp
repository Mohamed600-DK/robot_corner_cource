#include <iostream>

class Person
{
private:
    std::string name;
    std::string gender;
    float age;

public:
    Person(std::string n, std::string g, float a) : name(n), gender(g), age(a)
    {
    }
    void set_name(std::string n)
    {
        name=n;
    }
};

class Student : public Person
{
private:
    int student_level;
    float gpa;

public:
    Student(std::string n, std::string g, float a, int l, float gpa) : Person(n, g, a), student_level(l), gpa(gpa)
    {
    }
    void set_gpa(float g)
    {
        gpa=g;
    }

};

int main(void)
{
    Person p("mohamed","male",23);
    Student s("omar","male",25,4,3.2);
    

    return 0;
}