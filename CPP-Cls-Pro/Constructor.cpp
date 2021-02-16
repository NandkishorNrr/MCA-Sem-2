#include <iostream>

using namespace std;
class A
{
    int x,y;
public:
    A()
    {
        x=1;
        y=2;
        cout<<x<<endl<<y;
    }
    /*A(int a=3,int n=4)
    {x=a;y=b;
    cout<<x<<endl<<y;
    }
    */
};
int main()
{
    A a;
    cout << "\nHello world!" << endl;
    return 0;
}
