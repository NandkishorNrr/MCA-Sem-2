#include <iostream>
#include<conio.h>
using namespace std;
class square
{

public:
     float area,side;
    void putdata()
    {
        area=side*side;
        cout<<"\nSide of square is : "<<side;
        cout<<"\nArea of Square is : "<<area;

    }
    void getdata()
    {
        cout<<"Enter side of square.\n";
        cin>>side;
    }
    square operator+(square s)
    {
        square ss;

        ss.side=side+s.side;
        ss.area=area+s.area;

        return ss;
    }
};
int main()
{
    void sputdata(square,square);
    square s1,s2,s3;
    s1.getdata();
    s2.getdata();

    cout<<"\nS1 square.";
    s1.putdata();
    cout<<"\nS2 square.";
    s2.putdata();
    cout<<"\nAfter S1+S2 square.";
   sputdata(s1,s2);
    getch();
    return 0;
}
void sputdata(square s1,square s2)
    {
        square s3;
         s3=s1+s2;
        cout<<"\nSide of square is : "<<s3.side;
        cout<<"\nArea of Square is : "<<s3.area;
    }
