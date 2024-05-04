#include<iostream>

#include"../inc/Stack.h"


template<class stack_type,int MAX_SIZE>
bool Stack<stack_type,MAX_SIZE>::is_empty()
{
    return this->top < 0 ? 1 : 0;
}
