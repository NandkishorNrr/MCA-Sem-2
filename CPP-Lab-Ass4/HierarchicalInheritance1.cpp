#include <iostream>
#include<conio.h>
using namespace std;
class data
{

public:
    int a;
    void putdata()
    {
        cout<<"Enter a number.\n";
        cin>>a;
    }
};
class square:public data
{
public:
    void sshow()
    {
        cout<<"\nSquare of "<<a<<" is : "<<a*a<<endl;
    }

};

class cube:public data
{
public:
    void cshow()
    {
        cout<<"\nCube of "<<a<<" is : "<<a*a*a<<endl;
    }

};
int main()
{
    square s1;
    cube c1;
    s1.putdata();
    s1.sshow();
    c1.putdata();
    c1.cshow();
    return 0;
}
