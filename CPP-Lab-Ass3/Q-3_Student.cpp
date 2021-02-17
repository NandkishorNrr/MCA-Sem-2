#include <iostream>
#include<conio.h>
using namespace std;
class student
{
private:
    int roll_no,marks;
    char name[10];
public:

    friend void setdata(student);
    friend void showdata(student);
};
 void setdata(student s)
    {
      cout<<"\nEnter Your name : ";
      cin>>s.name;
     // cout<<s.name;
      cout<<"\nEnter Your Roll No. : ";
      cin>>s.roll_no;
      cout<<"\nEnter Your Marks : ";
      cin>>s.marks;
    }
    void showdata(student s)
    {
        cout<<"\nName : "<<s.name;
        cout<<"\nName : "<<s.name;    //Error (name not printing...)
        cout<<"\nRoll No. is : "<<s.roll_no;
        cout<<"\nMarks : "<<s.marks;
        cout<<endl;
    }

int main()
{
    student s1;
    setdata(s1);
    showdata(s1);
    getch();
    return 0;
}
