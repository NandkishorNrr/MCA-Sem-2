#include <iostream>
#include<conio.h>
using namespace std;
class flight
{
private:
    int fn;
    string desti;
    float dista,fuel;
    void CALFUEL(float dista)
    {
        if(dista<=1000)
            cout<<"\nFuel :"<<500;
        else if(dista<=2000)
            cout<<"\nFuel :"<<1100;
        else
            cout<<"\nFuel :"<<2200;
    }
public:
    void FEEDINFO()
    {
        cout<<"\n Enter flight no., Destination, distance.\n ";
        cin>>fn>>desti>>dista;
        CALFUEL(dista);
    }
    void showdata()
    {
        cout<<"\nYour Flight number is : "<<fn;
        cout<<"\nYour Destination is : "<<desti;
        cout<<"\nYour Distance is : "<<dista;

    }
};
int main()
{
    flight f1;
    f1.FEEDINFO();
    f1.showdata();
    getch();
    return 0;
}
