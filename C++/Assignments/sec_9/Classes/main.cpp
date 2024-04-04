#include"inc/Employee.h"
#include"inc/Engineer.h"
#include"inc/Sales.h"




int main(void)
{

    Employee* Ptr_Employee;
    Engineer Eng1_1("Mohamed","Mechatronics",6000,2,2,1.5);
    Sales    sales_1("Ahmed",5500,5.6,0.5);

    Ptr_Employee=&Eng1_1;
    Ptr_Employee->print();
    Ptr_Employee=&sales_1;
    Ptr_Employee->print();

    return 0;
}