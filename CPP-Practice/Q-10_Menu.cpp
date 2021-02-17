#include<iostream>
#include<conio.h>
using namespace std;
class menu
{
private:
    int a,b;
public:
    /*void getdata()
    {
        cout<<"Enter two number.\n";
        //cin>>a>>b;
    }
    void showdata()
    {
        cout<<"\na= "<<a<<"m."<<"\nb= "<<b<<"cm. \n";
    }*/
    menu operator +(menu p)
    {
        menu temp;
        temp.a=a+p.a;
        temp.b=b+p.b;
        return temp;
    }
    menu operator -(menu m)
    {
        menu temp;
        temp.a=a-m.a;
        temp.b=b-m.b;
        return temp;
    }
    friend ostream& operator<<(ostream&,menu);
    friend istream& operator>>(istream&,menu&);
};
ostream& operator<<(ostream& dout,menu d)
{
    cout<<"\na= "<<d.a<<"m. "<<"\nb= "<<d.b<<" cm.";
    return dout;
}
istream& operator>>(istream&din,menu&d)
{
    cin>>d.a>>d.b;
    return din;
}

int main()
{
    menu o1,o2,o3,o4;
    cout<<"Enter two numbers in m and cm.\n";
    cin>>o1;
     cout<<"Enter two numbers in m and cm.\n";
    cin>>o2;
    cout<<"\nSum of given numbers is : ";
    o3=o1+o2;
    cout<<o3;
    cout<<"\n\nDifference of given numbers is :";
    o4=o1-o2;
    cout<<o4;
    getch();
}
