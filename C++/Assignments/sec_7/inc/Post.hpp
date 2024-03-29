#ifndef POST_STUDENT_h
#define POST_STUDENT_h

#include "Student.hpp"

class Post_Student : Student
{
private:
    std::string research_topic;

public:
    // Sets
    void Set_research_topic(std::string research_topic);
    // Gets
    void Get_research_topic(std::string &research_topic);
    // contractor
    Post_Student();
    Post_Student(std::string name, Gender_t gender, int age, int Level, float GPA, std::string research_topic);
};

#endif