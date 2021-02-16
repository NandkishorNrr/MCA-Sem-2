#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num,din,div;
    cout<<"Enter value of num & din :";
        cin>>num>>din;

       try
       {
           if(din==0)
            throw din;

            div=num/din;
             cout<<"\nDivision :"<<div;
       }
       catch(int ex)
       {
           cout<<"\nZero is not allow here.\nDivision = 'NOT DEFINE'";
       }
       
        getch();
    return 0;
}
