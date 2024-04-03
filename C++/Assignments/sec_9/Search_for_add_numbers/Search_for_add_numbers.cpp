#include "inc/search.hpp"


int main(void)
{
    std::vector<int> test = {3,2,4};
    int target = 6;

    auto escape_element = [&test](std::vector<int> &saved_vector, int remove_location)
    {
        saved_vector.clear();
        saved_vector=test;
        saved_vector[remove_location]=0;
    };

    for (int index_counter = 0; index_counter < test.size(); index_counter++)
    {
        std::vector<int> tem;
        int location_founded;
        unsigned int search_number = (unsigned int)(target - test[index_counter]);
        escape_element(tem, index_counter);
        search_result_t search_result = Search(tem, search_number, location_founded);
        if (search_result == Found)
        {
            std::cout << index_counter << " " << location_founded;
            break;
        }
        else
        {
        }
    }

    return 0;
}