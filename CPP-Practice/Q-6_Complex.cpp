#include <iostream>

using namespace std;
class complex
{
private:
    float a,b;
public:
    void set(float,float);
    void disp();
    complex sum(complex);
};
void complex::set(float x,float y)
{
    a=x;
    b=y;
}
void complex::disp()
{
    cout<<"\na="<<a<<"\nb="<<b;
}
complex complex::sum(complex c)
{
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return temp;
}
int main()
{
   complex c1,c2,c3;
   c1.set(4.0,5.0);
   c2.set(6.5,4.1);
   cout<<"\nC1";
   c1.disp();
   cout<<"\n\nC2";
   c2.disp();
   c3=c1.sum(c2);
   cout<<"\n\nSum of C1 & C2.";
   c3.disp();
    return 0;
}
