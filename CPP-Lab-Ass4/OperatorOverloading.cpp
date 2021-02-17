#include<iostream>  
#include<conio.h>
using namespace std;
class triangle
{
private:
    float base,height;
public:
    void getdata()
    {
        cout<<"Enter Base and Height of the triangle.\n";
        cin>>base>>height;
    }
    void show()
    {
        cout<<"\nBase = "<<base;
        cout<<"\nHeight = "<<height<<endl;
    }
    triangle operator-(triangle t)
    {
        triangle temp;
        temp.base=base-t.base;
        cout<<"\nAfter Subtracting T1-T2.\n";
        temp.height=height-t.height;
        return temp;
    }
};
int main()
{
    triangle t1,t2,t3;
    t1.getdata();

    t2.getdata();

    t3=t1-t2;
    t3.show();
    getch();

    return 0;
}
