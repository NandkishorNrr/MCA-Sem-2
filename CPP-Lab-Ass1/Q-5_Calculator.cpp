#include <iostream>
#include<conio.h>
using namespace std;
class calculator
{
private:
    float a,b,sum,mult;
public:
    void setdata();
    void Scalculate();
    void Mcalculate();
};
void calculator::setdata()
{
    cout<<"\nEnter two number :\n ";
    cout<<"  :> ";
    cin>>a;
    cout<<"   :> ";
    cin>>b;
}
void calculator::Scalculate()
   {
        sum=a+b;
        cout<<"\nSum two number is :-> "<<sum;
   }
void calculator::Mcalculate()
{
    mult=a*b;
    cout<<"\nMultiple two number is :-> "<<mult;
}
int main()
{
    calculator c;
    int i;
    cout<<"Enter '1' to Add two numbers.\n";
    cout<<"Enter '2' to Multiply two numbers.\n";
    cin>>i;
    switch(i)
    {
     case 1:
       {
        c.setdata();
        c.Scalculate();
       }
        break;
     case 2:
        {
        c.setdata();
        c.Mcalculate();
        }
        break;
     default:
        cout<<"\nInvalid Choice.";
    }
    getch();
    return 0;
}
