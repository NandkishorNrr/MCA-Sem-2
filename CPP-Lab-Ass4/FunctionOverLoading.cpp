#include <iostream>
#include<conio.h>

using namespace std;
class calculator
{
private:
    int a,b,c;
public:
    void aad(int i,int j)
    {
        a=i;
        b=j;
        cout<<"Sum of "<<a<<" and "<<b<<" is : "<<a+b;
    }
    void add(int i,int j,int k)
    {
        int a=i;
        int b=j;
        int c=k;
        cout<<"\nSum of "<<a<<", "<<b<<" and "<<c<<" is : "<<a+b+c;
    }

};
int main()
{
    calculator c;
    c.aad(4,5);
    c.add(7,4,9);
    getch();
    return 0;
}
