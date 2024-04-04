#include "inc/search.hpp"

void getUserVector(std::vector<int>& user_vector,int& target_number);

int main(void)
{
    std::vector<int> user_vector;
    int target_number;
    
    getUserVector(user_vector,target_number);

    auto escape_element = [&user_vector](std::vector<int> &saved_vector, int remove_location)
    {
        saved_vector.clear();
        saved_vector=user_vector;
        saved_vector[remove_location]=0;
    };

    for (int index_counter = 0; index_counter < user_vector.size(); index_counter++)
    {
        std::vector<int> tem;
        int location_founded;
        unsigned int search_number = (unsigned int)(target_number - user_vector[index_counter]);
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
void getUserVector(std::vector<int>& user_vector,int& target_number) {
    int input;

    std::cout << "Enter integers for the vector (enter -1 to finish): ";

    while (true) {
        std::cin >> input;
        if (input == -1) {
            break;
        }
        user_vector.push_back(input);
    }
    std::cout <<std::endl<<"Enter the target number: ";
    std::cin >> target_number;

}