#include <iostream>
#include<string>
#include<conio.h>
using namespace std;
class shap
{
private:
    string name,color;
    int adge;
public:

    shap()  //zero arg_constructor
    {
        cout<<"\nEnter  name &  color : ";
        getline(cin,name);
        getline(cin,color);
        show();
    }
      void show()  // show method
    {
        cout<<"\nshape "<<name<<"\nColor is : "<<color;

    }

    shap(int adge)    // parameterized constructor
    {
        adge=adge;
        cout<<"\nAdge is : "<<adge;
    }
};
class triangle:public shap
{
private:
    int b,h;
    float area;
public:
    void setdata()
    {
        cout<<"\nEnter Base & Height of the Triangle : \n";
        cin>>b>>h;
    }
    void showdata()
    {
        area=0.5*b*h;
        cout<<"\nArea of Triangle is : "<<area;
    }
};
int main()
{
	triangle t;
	int a=3;      // Enter adge of the shape { s1(a) }'a'
	shap s(a);
    t.setdata();
    t.showdata();
    getch();
    return 0;
}
