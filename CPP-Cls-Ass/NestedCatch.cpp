#include <iostream>

using namespace std;

int main()
{
    int a,b,sub;
    cout<<"Enter two numbers.\n";
    cin>>a>>b;
    sub=a-b;
    try
    {
        if(sub<0)
        {
            cout<<"\nThrow -ve number.\n";
            throw sub;
        }
        else
            if(sub>=0)
        {
            cout<<"\nThrow +ve number.\n";
            throw sub;
        }

    }
    catch(int i)
        {
            try
        {
            if(i=0)
            {
                cout<<"\nThrow 0\n";
                throw i;
            }
        }
        catch(int i)
        {
            cout<<"\nException caught from inner try block\n sub="<<i;
            cout<<a<<"-"<<b<<" = "<<sub;

        }
            cout<<"\nException caught from try block\n";
            cout<<a<<"-"<<b<<" = "<<sub;

        }

    return 0;
}
