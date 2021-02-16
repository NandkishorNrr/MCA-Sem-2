#include <iostream>
#include<conio.h>
using namespace std;
class cirle
{
private:
    int r;
    float a,p;
public:
    void getdata();
    void showdata();
};
void cirle::getdata()
{
    cout<<"Enter Radius of the Circle\n";
    cin>>r;
    a=3.14*r*r;
    p=2*3.14*r;
}
void cirle::showdata()
{
    cout<<"\nArea of the Circle : "<<a<<" unit sq.";
    cout<<"\nPerimeter of the Circle : "<<p<<" unit.";
}
int main()
{
    cirle c1;
    c1.getdata();
    c1.showdata();
    getch();
    return 0;
}
