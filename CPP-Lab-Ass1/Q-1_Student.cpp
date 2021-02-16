#include <iostream>
#include<conio.h>
using namespace std;
class student
{
private:
    int h_marks,e_marks,rollno,p_marks,m_marks,c_marks;
    float p,total;
    char n[12];
public:
    void getdata();
    void showdata();

};
void student::getdata()
{
     cout<<"Enter Name of student :-> ";
         cin>>n;
        cout<<"\nEnter Roll No. of student :-> ";
         cin>>rollno;
        cout<<"\n\nEnter S_student Marks(Out of 100) in_ \n";
        cout<<"\nEnglish :-> ";
         cin>>e_marks;
        cout<<"\nHindi :-> ";
         cin>>h_marks;
        cout<<"\nPhysics :-> ";
         cin>>p_marks;
        cout<<"\nChemistry :-> ";
         cin>>c_marks;
        cout<<"\nMathematics :-> ";
          cin>>m_marks;
}

void student:: showdata()
{

    cout<<"\nName :-> "<<n;
    cout<<"\nRoll No. :-> IC-2K-19- "<<rollno;
    cout<<"\n\n\t *---*\n\n";
    cout<<"\nEnglish :-> "<<e_marks;
    cout<<"\nHindi :-> "<<h_marks;
    cout<<"\nPhysics :-> "<<p_marks;
    cout<<"\nChemistry :-> "<<c_marks;
    cout<<"\nMathematics :-> "<<m_marks;

    total=  e_marks+h_marks+p_marks+c_marks+m_marks;
    p=total/5;

    if(p>=85)
         cout<<"\n\nYou get 'A' grade with :-> "<<p<<" %";

        else if(p>75)
        cout<<"\n\nYou get 'B' grade with :-> "<<p<<" %";

        else if(p>65)
        cout<<"\n\nYou get 'C' grade with :-> "<<p<<" %";

        else if(p>55)
        cout<<"\n\nYou get 'D' grade with :-> "<<p<<" %";

        else if(p>45)
        cout<<"\n\nYou get 'E' grade with :-> "<<p<<" %";

        else
        cout<<"\n\nBetter Luck Next Time You are 'FAILL' with :-> "<<p<<" %";

}
int main()
{
    student s1;
    s1.getdata();
    s1.showdata();
    getch();
    return 0;

}
