#include <iostream>
#include<conio.h>
using namespace std;
class number
{
private:
    int a,b,c;
    float g,h;
public:
    
    void add(int p,int q)
    {
        cout<<"Enter two number(int_int) : ";
        cin>>p>>q;
        a=p;
        b=q;
        cout<<"Sum of "<<a<<" and "<<b<<" is "<<p+q;
    }
    void add(int p,float f)
    {
        cout<<"\nEnter two number(int_float) : ";
        cin>>p>>f;
        a=p;
        h=f;
        cout<<"\nSum of "<<a<<" and "<<h<<" is "<<p+f;
    }
    void add(float p,float q)
    {
        cout<<"\n\nEnter two number(float_float) : ";
        cin>>p>>q;
        g=p;
        h=q;
        cout<<"\nSum of "<<g<<" and "<<h<<" is "<<p+q;
    }
    void add(float h,int q)
    {
        cout<<"\n\nEnter two number(float_int) : ";
          cin>>h>>q;
        g=h;
        b=q;
        cout<<"\nSum of "<<g<<" and "<<b<<" is "<<h+q;
    }
    void add(int p,int q,int r)
    {
        cout<<"\n\nEnter three number(int_int_int) : ";
         cin>>p>>q>>r;
        a=p;
        b=q;
        c=r;
        cout<<"\nSum of "<<a<<", "<<b<<" and "<<c<<" is "<<p+q+r;
    }

};
int main()
{
    int x=0,y=0,z=0;
    float d=0,e=0;
   number n1;
   n1.add(x,y);
   n1.add(x,d);
   n1.add(d,e);
   n1.add(d,y);
   n1.add(x,y,z);
   getch();
    return 0;
}
