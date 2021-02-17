#include <iostream>
#include<conio.h>
using namespace std;
class rectangle
{
private:
    int l,w;
public:
    void setdata()
    {
        cout<<"Enter value of length and width for a rectangle.\n";
        cin>>l>>w;
    }
    void showdata()
    {
        cout<<"\nLength of Rectangle : "<<l;
        cout<<"\nWidth of Rectangle : "<<w;
    }
    rectangle operator+(rectangle r)
    {
        rectangle temp;
        temp.l=l+r.l;
        temp.w=w+r.w;
        return temp;
    }

};
int main()
{
    rectangle r1,r2,r3;
    r1.setdata();
    r2.setdata();
    cout<<"\nAfter Sum of L & W of R1 & R2.";
    r3=r1+r2;
    r3.showdata();
    getch();
    return 0;
}
