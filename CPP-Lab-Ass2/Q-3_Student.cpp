#include <iostream>
#include<conio.h>
using namespace std;
class student
{
private:
    int h_marks=0,e_marks=0,rollno;
    char n[10];
public:
    void input();
    void show();
    student()
    {
        input();
        show();
    }

};
void student::input()
    {
        cout<<"Enter Name of student : ";
        cin>>n;
        cout<<"\nEnter Roll No. of student : ";
        cin>>rollno;
        cout<<"\nEnter Marks in Hindi & English respectively : ";
        
        cin>>h_marks;
		cin>>e_marks;
    }
void student:: show()
{
    cout<<"\nName : "<<n;

    cout<<"\nRoll No. : IC-2K-19- "<<rollno;
    cout<<"\nMarks ->\nHindi : "<<h_marks<<"\nEnglish : "<<e_marks;
}
int main()
{
    student s1;
    getch();
    return 0;
}
