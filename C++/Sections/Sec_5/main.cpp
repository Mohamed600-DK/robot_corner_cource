#include <iostream>
#include "rectangle.h"
using namespace std;




int main(void)
{
    Rectangle rec_1;

    rec_1.Set_length(10);
    rec_1.Set_width(10);
    cout<<"length= "<<rec_1.get_length()<<endl;
    cout<<"width= "<<rec_1.get_width()<<endl;
    cout<<"area= "<<rec_1.get_area()<<endl;
    return 0;
}



