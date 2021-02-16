ero#include <iostream>
#include<conio.h>
using namespace std;

class divbyzero
{
public:
    void msg()
    {
        cout<<"\nDiv BY 0.";
    }
};
int main()
{
    int a[5],b;
    cout<<"Enter Array Element.";
    for(int x=0;x<5;x++)
    {
        cin>>a[x];
        try
        {
            if(a[0]==0)
            {
                throw new divbyzero(); //() for call constructor....
            }
                b=5/a[0];
                cout<<"\nb="<<b;
            
        }
        catch (divbyzero *e)   //Block  _not a function
        {
            e->msg();
        }
    }
    return 0;
}
