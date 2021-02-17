#include <iostream>
#include<conio.h>
using namespace std;
class shape
{
public:
    double l,h;

    void setdata()
    {
        cout<<"\nEnter the Length and Height of the fig. : ";
        cin>>l>>h;
    }
    virtual void showdata()=0;
};

class Triangle:public shape
{
private:
    float area;
public:
    void showdata()
    {
        cout<<"\nArea of Triangle is : "<<0.5*l*h;
    }
};

class Rectangle:public shape
{
private:
    float area;
public:
    void showdata()
    {
        cout<<"\nArea of Rectangle is : "<<l*h;
    }
};

int main()
{
    Rectangle r;
    Triangle t;
    cout<<"Rectangle : \n";
   r.setdata();
   r.showdata();
   cout<<"\n\nTriangle : \n";
   t.setdata();
   t.showdata();
    getch();
    return 0;
}
