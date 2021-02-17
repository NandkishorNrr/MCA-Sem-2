#include<iostream>
#include<conio.h>
using namespace std;
class time
{
//private:

public:
      int a,b;
    time operator +(time p)
    {
        time temp;
        temp.a=a+p.a;
        temp.b=b+p.b;
        return temp;
    }
   /*  int operator>(time t)
     {
         if(a>t.a&&b>t.b)
            return 1;
         else
            return 0;
     }
     */
    friend ostream& operator<<(ostream&,time);
    friend istream& operator>>(istream&,time&);
};
ostream& operator<<(ostream& dout,time d)
{
    cout<<"\n"<<d.a<<" hour"<<": "<<d.b<<" min.";
    return dout;
}
istream& operator>>(istream&din,time&d)
{
    cin>>d.a>>d.b;
    return din;
}

int main()
{
    time o1,o2,o3,o4;
    cout<<"Enter two numbers in hour and min.\n";
    cin>>o1;
     cout<<"Enter two numbers in hour and min.\n";
    cin>>o2;
    int k=o1.a,l=o2.a;

    if(k>l)
        cout<<"\nT1 is greater than T2";
    else
        cout<<"\nT2 is greater than T1";
    cout<<"\nSum of given time is : ";
    o3=o1+o2;
    cout<<o3;

    getch();
}
