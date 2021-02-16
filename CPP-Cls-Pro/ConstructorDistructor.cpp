#include <iostream>
#include<conio.h>
using namespace std;
class test
{
public:
    test()
    {
        cout<<"\nI am constructor.";
    }
    ~test()
    {
        cout<<"\nI am Distructor.";
    }
};
int main()
{
    try
    {
        cout<<"\nWelcome to try.";
        test t;
        throw 10;
        cout<<"\nTesting Destructor.";
    }
    catch(...)
    {
        cout<<"\nThank you.";
    }

    getch();
    return 0;
}
