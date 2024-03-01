#include<iostream>
#include <array>
using namespace std;

void try_swap(void);
void try_grade(void);
void try_array(void);

void grads(void);
void swap_ptr(int* x,int* y);
void swap_retrace(int& x,int& y);
void get_array_elemets(array<int,3> &input_array);
void print_array_elemets(const array<int,3> &input_array);

int main(void)
{

    //try_swap();
    //try_grade();
    try_array();
    return 0;
}


void try_swap(void)
{
    int a=3,b=5;
    cout<<"a="<<a<<" b="<<b<<endl;
    cout<<"using 'swap_ptr func"<<endl;
    swap_ptr(&a,&b);
    cout<<"a="<<a<<" b="<<b<<endl;
    a=3;
    b=5;
    swap_retrace(a,b);
    cout<<"using 'swap_rename func"<<endl;
    cout<<"a="<<a<<" b="<<b<<endl;
}

void try_array(void)
{

    array<int,3> arr;
    array<int,3> arr2;
  
    get_array_elemets(arr);
    get_array_elemets(arr2);
    arr.swap(arr2);
    print_array_elemets(arr);
    print_array_elemets(arr2);
}


void get_array_elemets(array<int,3> &input_array)
{

    cout<<"enter the array elemets:"<<endl;
    for( auto &element:input_array)
    {
        cin>> element;
    }

}

void print_array_elemets(const array<int,3> &input_array)
{

    cout<<"the array elemets:"<<endl;
    for( auto element:input_array)
    {
        cout<< element<<endl;
    }

}

void swap_ptr(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void swap_retrace(int& x,int& y)
{
    int temp=x;
    x=y;
    y=temp;
}

void try_grade(void)
{
    grads(); 
}

void grads(void)
{
    int get_user_value=0;
    while(1)
    {
        cout<<"Enter Your Grade or '-1' to exit: ";
        cin>>get_user_value;
        cout<<endl;
        if(get_user_value>=0 && get_user_value<50 )
        {
            cout<<"Failed"<<endl;
        }
        else if(get_user_value>=50 && get_user_value<65)
        {
            cout<<"Pass"<<endl;
        }
        else if(get_user_value>=65 && get_user_value<75)
        {
            cout<<"good"<<endl;
        }
        else if(get_user_value>=75 && get_user_value<85)
        {
            cout<<"very good"<<endl;
        }
        else if(get_user_value>=85 && get_user_value<=100)
        {
            cout<<"Excellent"<<endl;
        } 
        else if((char)get_user_value <0)
        {
            break;
        } 
        else
        {
            cout<<"un valid input"<<endl;
        }
    }
}