#include <iostream>
#include<conio.h>
using namespace std;
class employee
{
private:
    char name[12];
    int age;
    int mob_no;
public:
    void getdata()
    {
        cout<<"Enter Employee Details.\n";
        cout<<"Name : ";
        cin>>name;
        cout<<"\nAge : ";
        cin>>age;
        cout<<"\nMobile number : ";
        cin>>mob_no;
        cout<<endl;
    }
    void showdata()
    {
        cout<<"\nEmployee Details.\n";
        cout<<"Name : "<<name;
        cout<<"\nAge : "<<age;
        cout<<"\nMobile number : "<<mob_no<<endl;
    }
};

class institute1 :public employee
{
private:
    float salary;
    float timing;
public:
     void getdata1()
     {
         getdata();
         cout<<"\nSalary :";
         cin>>salary;
         cout<<"Timing : ";
         cin>>timing;
     }
     void  showdata1()
     {
         showdata();
         cout<<"\nSalary : "<<salary;
         cout<<"\nTiming : "<<timing;
     }

};

class institute2:public employee
{
private:
    float salary;
    float timing;
    float rest;
public:
     void getdata2()
     {
         getdata();
         cout<<endl;
         cout<<"\nSalary : "  ;
         cin>>salary;
         cout<<"Timing : ";
         cin>>timing;
         cout<<"\nRest : ";
         cin>>rest;
     }
     void  showdata2()
     {
         showdata();
         cout<<"\nSalary : "<<salary;
         cout<<"\nTiming : "<<timing;
         cout<<"\nRest : "<<rest;
     }

};
int main()
{
    institute1 i1;
    institute2 i2;
    cout<<"\nInstitute 1 Employee.\n";
    i1.getdata1();
    i1.showdata1();
    cout<<"\n\t\t***";
    cout<<"\n\n\nInstitute 2 Employee.\n";
    i2.getdata2();
    i2.showdata2();

    getch();
    return 0;
}
