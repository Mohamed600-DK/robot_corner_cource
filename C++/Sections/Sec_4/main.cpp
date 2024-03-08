#include<iostream>
#include <vector>
#include <functional>

using namespace std;

namespace ptr_function
{
    void ptr_fun(void);
    void ptr_fun(int x);
    void test_ptr_fun(void);
    void print_element(int input_element);
    void for_each(const vector<int> input_vector,void(*print_func)(int));
}

namespace lambda_function
{

    void test_lambda_fun(void);
    void for_each(const vector<int> input_vector,function<void(int)> lambda_fun);
}

namespace struct_
{
    struct Car
    {
        string name;
        string color;
        int model;
        void print_model(void)
        {
            cout <<model<<endl;
        }
    };

    void test_struct_(void);
    void input_car_data(Car & input);
    void print_car_data(Car & input);
    void input_car_data(Car * input);
    void print_car_data(Car * input);
}
int main(void)
{
    // ptr_function::test_ptr_fun();
    //lambda_function::test_lambda_fun();
    struct_::test_struct_();

    return 0;
}



namespace ptr_function
{
    void ptr_fun(void)
    {
        cout<<"Hello"<<endl;
    }
    void ptr_fun(int x)
    {
        cout<<"Hello"<<" value: "<<x<<endl;
    }

    void test_ptr_fun(void)
    {
        vector<int> my_vector={1,2,3,4,5,6};
        void (*void_ptr_func)(void)=&ptr_fun;
        void (*int_ptr_func)(int)=ptr_fun;
        void_ptr_func();
        int_ptr_func(10);
        for_each(my_vector,print_element);

    }

    void print_element(int input_element)
    {
        cout<<"value: "<<input_element<<endl;
    }

    void for_each(const vector<int> input_vector,void(*print_func)(int))
    {
        for(auto element:input_vector)
            print_func(element);

    }
} // ptr_function


namespace lambda_function
{

    void test_lambda_fun(void)
    {
        vector<int> my_vector={1,2,3,4,5,6};
        int i=10;
        auto lambda_=[=](int value){cout<<"Hello"<<" value: "<<value*i<<endl;};
        for_each(my_vector,lambda_);      
    }
    void for_each(const vector<int> input_vector,function<void(int)> lambda_fun)
    {
        for(auto element:input_vector)
            lambda_fun(element);

    }
}// lambda_function

namespace struct_
{
    void test_struct_(void)
    {
        Car car_1,car_2;
        Car* ptr_car_2=&car_2;

        input_car_data(car_1);
        cout<<endl;
        print_car_data(car_1);
        cout<<"------------------"<<endl;
        input_car_data(ptr_car_2);
        cout<<endl;
        print_car_data(ptr_car_2);
        cout<<"------------------"<<endl;
    }
    void input_car_data(Car & input)
    {
        cout <<"Car name: ";
        cin>>input.name;

        cout <<"Car color: ";
        cin>>input.color;

        cout <<"Car model: ";
        cin>>input.model;
    }
    void print_car_data(Car & input)
    {
        cout <<"Car name: ";
        cout<<input.name;
        cout<<endl;

        cout <<"Car color: ";
        cout<<input.color;
        cout<<endl;

        cout <<"Car model: ";
        cout<<input.model;
        cout<<endl;
    }

    void input_car_data(Car* input)
    {
        cout <<"Car name: ";
        cin>>input->name;

        cout <<"Car color: ";
        cin>>input->color;

        cout <<"Car model: ";
        cin>>input->model;
    }
    void print_car_data(Car* input)
    {
        cout <<"Car name: ";
        cout<<input->name;
        cout<<endl;

        cout <<"Car color: ";
        cout<<input->color;
        cout<<endl;

        cout <<"Car model: ";
        cout<<input->model;
        cout<<endl;
    }
}//struct_