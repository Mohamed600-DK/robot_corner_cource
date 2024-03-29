#ifndef POST_STUDENT_h
#define POST_STUDENT_h

#include "Student.hpp"
#include "Employee.hpp"
#include <vector>

class Ass_Student : Student, Employee
{
private:
    std::string department;
    std::vector<std::string> teaching_topics;

public:
    // Sets
    void Set_department(std::string department);
    void Set_teaching_topics(std::string topic_name);
    // Gets
    void Get_department(std::string &department);
    void Get_teaching_topics(std::vector<std::string> &teaching_topics);
    // contractor
    Ass_Student();
    Ass_Student(std::string name, Gender_t gender, int age, int Level, float GPA, std::string title, float Salary, std::string department, std::vector<std::string> teaching_topics);
};

#endif