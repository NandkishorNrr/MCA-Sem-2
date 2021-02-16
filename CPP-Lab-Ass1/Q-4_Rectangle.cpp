#include <iostream>
#include<conio.h>
using namespace std;

class rectangle
{
private:
    char name[8],color[8];
    int adge,w,l;
    float area;
public:
    void setdata();
    void showdata();
    void shap(int);
    rectangle()
    {
        setdata();
    }
};

void rectangle::setdata()  //zero arg_constructor
    {
        cout<<"Enter Name(Shape) : ";
        cin>>name;
        cout<<"\nEnter Color : ";
        cin>>color;
        cout<<"\nEnter Length & Width of the Rectangle : \n";
        cin>>l>>w;
    }
void rectangle::showdata()  // show method
    {
        cout<<"\nShape : "<<name<<"\nColor is : "<<color;
        area=l*w;
         int a=4;
         shap(a);     // Enter adge of the shape { s1(a) }'a'
        cout<<"\nArea of Rectangle is : "<<area;

    }

void rectangle::shap(int adge)    // parameterized constructor
    {
        adge=adge;
        cout<<"\nAdge is : "<<adge;
    }

int main()
{
    rectangle r;
    r.showdata();
    getch();
    return 0;
}
