#include <iostream>
#include<conio.h>
using namespace std;
class student
{
private:
    int h_marks,e_marks,rollno;
    char n[10];
    
public:
		float avg1,total1;
    void input();
    void show();
};

void student::input()
    {
        cout<<"Enter Name of student :-> ";
         cin>>n;
        cout<<"\nEnter Roll No. of student :-> ";
         cin>>rollno;
        cout<<"\n\nEnter S_student Marks in_ \n";
        cout<<"\nEnglish :-> ";
         cin>>e_marks;
        cout<<"\nHindi :-> ";
         cin>>h_marks;
    }
void student:: show()
{
    cout<<"\nName :-> "<<n;
    cout<<"\nRoll No. :-> IC-2K-19- "<<rollno;
    cout<<"\n\n\t *---*\n\n";
     cout<<"\nEnglish :-> "<<e_marks;
    cout<<"\nHindi :-> "<<h_marks;
        	total1=e_marks+h_marks;
			avg1=(total1)/2;        	
}

class Sstudent:public student
{
private:
    int p_marks,m_marks,c_marks;
    float avg,total;
	
public:

    void getdata();
    void putdata();
};
void Sstudent::getdata()
{
    input();
     cout<<"\nPhysics :-> ";
    cin>>p_marks;
     cout<<"\nChemistry :-> ";
    cin>>c_marks;
     cout<<"\nMathematics :-> ";
    cin>>m_marks;
}
void Sstudent::putdata()
{
    show();	
    cout<<"\nPhysics :-> "<<p_marks;
    cout<<"\nChemistry :-> "<<c_marks;
    cout<<"\nMathematics :-> "<<m_marks;
    
    total=  total1+p_marks+c_marks+m_marks;
    avg=total/5;
    
    cout<<"\n\nTotal :-> "<<total;
    cout<<"\n\nAverage :-> "<<avg; 
}
int main()
{
    Sstudent s1;
    s1.getdata();
    s1.putdata();
    getch();
    return 0;
}
