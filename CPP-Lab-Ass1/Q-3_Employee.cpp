#include <iostream>
#include<conio.h>
using namespace std;
class employee
{
private:
    char name[12];
    int bs;
    float hra_p,da_p,t_sl;
public:
    void getdata();
    void showdata();
};
void employee::getdata()
{
    cout<<"Enter Employee Name : ";
    cin>>name;
    cout<<"\nEnter Basic Salary : ";
    cin>>bs;
    cout<<"\nEnter HRA(%) : ";
    cin>>hra_p;
    cout<<"\nEnter DA(%) : ";
    cin>>da_p;
    t_sl=bs+(bs*hra_p+bs*da_p)/100;
}
void employee::showdata()
{
     cout<<"\nEmployee's Name : "<<name;
      cout<<"\nEmployee's Total Salary : "<<t_sl;
}
int main()
{
    employee e1;
    e1.getdata();
    e1.showdata();
    getch();
    return 0;
}

