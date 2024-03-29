#include "../inc/Post.hpp"
// Sets
void Post_Student::Set_research_topic(std::string research_topic)
{
    this->research_topic = research_topic;
}
// Gets
void Post_Student::Get_research_topic(std::string &research_topic)
{
    research_topic = this->research_topic;
}
// contractor
Post_Student::Post_Student() : Student(), research_topic("")
{
}
Post_Student::Post_Student(std::string name,
                           Gender_t gender,
                           int age,
                           int Level,
                           float GPA,
                           std::string research_topic) : Student(name, gender, age, Level, GPA),
                                                         research_topic(research_topic)
{
}
