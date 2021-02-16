#include <iostream>
#include<conio.h>
using namespace std;

void test(int x)
{
    try
    {
        if(x==1) throw x;
        if(x==0) throw 'x';
        if(x==-1) throw 1.0;
    }
    catch(...)
    {
        cout<<"\nCaught an exception.";
    }
}
int main()
{
    cout<<"Testing generic catching.\n";
    test(1);
    test(0);
    test(-1);

    getch();
    return 0;
}
