#include <iostream>
#include "../inc/Linked_list.h"


template<class T>
Linked_list<T>::Linked_list():ptr_Top(NULL)
{}



template<class T>
void Linked_list<T>::Push(T push_element){
    
    Node* new_node=new Node;
    new_node->Item=push_element;
    new_node->ptr_Next=this->ptr_Top;
    this->ptr_Top=new_node;
}

template<class T>
void Linked_list<T>::Pop(T &pop_element){}

template<class T>
void Linked_list<T>::Pop(){}

template<class T>
void Linked_list<T>::Print(){}

template<class T>
bool Linked_list<T>::is_empty(){
    return this->ptr_Top==NULL ? 1:0; 
}




template<class T>
Linked_list<T>::~Linked_list(){}