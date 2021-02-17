#include <iostream>
#include<array>
#include<conio.h>
using namespace std;
class marksheet
{
private:
    char name[12],Enr_no[12];
    int roll_no=0;
    int theory_marks[5];
    int practical_marks[5];
public:
    void setdata(int);
    void putdata();
    void grad(float);
  // friend ostream& operator<<(ostream&,marks);
    //friend istream& operator>>(istream&, marks&);
};

/*ostream& operator<<(ostream &ct,marks m)
{
    cout<<"\n="<<m.;
    return ct;
}
istream& operator>>(istream&din, date& d)
{
    cin>>d.dd>>d.mm>>d.yy;
    return din;
}*/
void marksheet::putdata()
{

    cout<<"Enter Marks in Theory(out of 80) & Practical(out of 20) of five Subjects.\n";
    int Stotal=0;
    for(int i=0;i<=4;i++)
    {
     cin>>theory_marks[i];
      cin>>practical_marks[i];
        Stotal=theory_marks[i]+practical_marks[i];
        cout<<"Marks in Subject."<<i+1<<" "<<Stotal<<endl;
        marksheet s1;
        s1.grad(Stotal);
    }
}
void marksheet::grad(float in)
    {
        if(in<=100)
        {
        float g=in;
        if(g>90)
            cout<<"Your grade is : A\n";
        else if(g>75)
            cout<<"Your grade is : B\n";
            else if(g>65)
            cout<<"Your grade is : C\n";
            else if(g>40)
            cout<<"Your grade is : D\n";
            else if(g>30)
            cout<<"Your grade is : E\n";
            else
            if(g<=30)
            cout<<"You Get FAIL!";
         }
         else
            cout<<"\nYou Entered Invalid Marks\n";
    }
    void marksheet::setdata(int i)
    {
        cout<<"\nEnter You Name : ";
        cin>>name;
        cout<<"Enter Your Enrollment_no. : ";
        cin>>Enr_no;
        cout<<"\n\nYour Roll_No. is : IC-2K19-"<<i;
        cout<<"\nYou are : "<<name;
        cout<<"\nYour Enrollment number is : "<<Enr_no<<"\n\n";
    }
int main()
{
    marksheet m1;
    for(int i=1;i<=5;i++)
    {
        m1.setdata(i);
        m1.putdata();
        cout<<"\n\n------------------------------------* NEXT *------------------------------------------\n\n";
    }

    return 0;
}
