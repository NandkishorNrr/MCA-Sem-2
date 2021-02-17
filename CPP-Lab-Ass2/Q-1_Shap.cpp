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
int main()
{
	int a=3;
    shap s,s1(a);           // Enter adge of the shape { s1(a) }'a'
    getch();
    return 0;
}
