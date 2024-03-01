#include<iostream>
#include<array>

using namespace std;




int main(void)
{
    array<int,5>arr={5,2,6,7,8};

    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(auto iter:arr)
    {
        cout<<iter<<" ";
    }
    cout<<endl;
    return 0;
}
