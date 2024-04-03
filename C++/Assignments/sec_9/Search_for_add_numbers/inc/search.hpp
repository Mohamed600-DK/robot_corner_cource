#ifndef SEARCH_HPP
#define SEARCH_HPP



#include<iostream>
#include<vector>
#include<array>


typedef enum{
    Not_Found,
    Found

}search_result_t;



search_result_t Search(std::vector<int> &search_in, int seach_for, int &found_location);




#endif
