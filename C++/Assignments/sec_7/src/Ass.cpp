#include "../inc/Ass.hpp"

// Sets
void Ass_Student::Set_department(std::string department)
{
    this->department = department;
}
void Ass_Student::Set_teaching_topics(std::string topic_name)
{
    this->teaching_topics.push_back(topic_name);
}
// Gets
void Ass_Student::Get_department(std::string &department)
{
    department = this->department;
}
void Ass_Student::Get_teaching_topics(std::vector<std::string> &teaching_topics)
{
    teaching_topics = this->teaching_topics;
}
// contractor
Ass_Student::Ass_Student() : Student(), Employee(),department(""),teaching_topics{""}
{
}
Ass_Student::Ass_Student(std::string name,
                        Gender_t gender,
                        int age,
                        int Level,
                        float GPA,
                        std::string title,
                        float Salary,
                        std::string department,
                        std::vector<std::string> teaching_topics) : Student(name,gender,age,Level,GPA),
                        Employee(name,gender,age,title,Salary),department(department),teaching_topics(teaching_topics)
{
}
