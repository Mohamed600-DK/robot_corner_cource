#include<iostream>

#include "calc.h"

using namespace std;
void get_nums_operation(int* num_1,int* num_2,char* operation);



int main(void)
{
    int num_1;
    int num_2;
    char operation ;
    get_nums_operation(&num_1,&num_2,&operation);

    switch (operation)
    {
    case '+':
        cout<<"The Result= "<<add(num_1,num_2)<<endl;
        break;
    case '-':
        cout<<"The Result= "<<sub(num_1,num_2)<<endl;
        break;
    case '*':
        cout<<"The Result= "<<mult(num_1,num_2)<<endl;
        break;
    case '/':
        cout<<"The Result= "<<dive(num_1,num_2)<<endl;
        break;    
    }
    return 0;
}


void get_nums_operation(int* num_1,int* num_2,char* operation)
{
    cout<<"Enter num1 and num2:"<<endl;
    cin>>*num_1>>*num_2;
    cout<<"Enter operation(+,-,*,/): ";
    cin>>*operation;
    cout<<endl;
}