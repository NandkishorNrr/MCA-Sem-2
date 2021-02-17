#include <iostream>
#include<conio.h>
using namespace std;
class acount
{
private:
    char name[12];
    int acno;
    char actp[10];
    float acam;
    float adam;
    float wdam;
    float bal;
public:
     void input();
    void deposit();
    void withdrow();
    void display();

};
void acount::input()
{
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"\nEnter your A\c No. : ";
    cin>>acno;
    cout<<"\nEnter your A\c Type : ";
    cin>>actp;
    cout<<"\nEnter your A\c's current Balance : ";
    cin>>acam;

    cout<<"\n\n\t\t\t ***\n\n";
}
void acount::deposit()
{
    cout<<"\nEnter Amount to Deposit : ";
    cin>>adam;
}
void acount::withdrow()
{
    cout<<"\nEnter Amount to withdraw. : ";
    cin>>wdam;
}
void acount::display()
{
    cout<<"\n\n            *** WELL-COME ***";
    cout<<"\nHello : "<<name;
    cout<<"\nYour A\c balance was : "<<acam;

    cout<<"\nYou Withdrew : "<< wdam;

    cout<<"\nYou Deposited : "<<adam;
    bal=acam-wdam+adam;
    cout<<"\nYour Current Balance is : " <<bal;
}
int main()
{
    cout<<"WELL COME To TVANS's BANK!\n";
   acount a1;
   a1.input();
   a1.deposit();
   a1.withdrow();
   a1.display();
   getch();
    return 0;
}

