#include "../inc/search.hpp"

search_result_t Search(std::vector<int> &search_in, int seach_for, int &found_location)
{

    int location = 0;
    search_result_t search_result =Not_Found;
    for (int &element : search_in)
    {
        if (location <= search_in.size())
        {
            if (element == seach_for)
            {
                found_location = location;
                search_result= Found;
            }
            else
            {
                location++;
            }
        }
        else
        {
            break;
        }
    }
    return search_result;
}