#include <iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class EMP
{
private:
    char name[12];
    char id;
    int cn;
    char adrs[30];
    int yrjn;
    char deptm[6];
public:
    void getdata();
    void putdata();
};
void EMP::getdata()
{


    cout<<"\nEnter your name : ";
    cin>>name;
    cout<<"\nEnter your ID : TE-2K20-";
    cin>>id;
    cout<<"\nEnter your Address : ";
    cin>>adrs;
    cout<<"\nEnter your year of joining : ";
    cin>>yrjn;
    cout<<"\nEnter Department : ";
    cin>>deptm;
    cout<<"\n\n";
}
void EMP::putdata()
{

    ofstream fout;

    fout.open("EMP_DATA.dat",ios::app);
    cout<<"Name : "<<name;
    cout<<"\nID : TE-2K20-"<<id;
    cout<<"\nAddress : "<<adrs;
    cout<<"\nJoining year : "<<yrjn;
    cout<<"\nDepartment : "<<deptm;
    cout<<"\n\n\t\t\t***\t\t\t";

    fout<<"Name : "<<name;
    fout<<"\nID : TE-2K20-"<<id;
    fout<<"\nAddress : "<<adrs;
    fout<<"\nJoining year : "<<yrjn;
    fout<<"\nDepartment : "<<deptm;
    fout<<"\n\n\t\t\t***\t\t\t";
    fout<<"\n\n";
}
int main()
{
    int i;
    cout<<"Enter '1' To Display List of Employee.\n";
    cout<<"Enter '2' To Add new Employee.\n";
    cin>>i;
    switch(i)
    {
    case 1:{
            #include<fstream>
            ifstream fin;
            char ch;
            fin.open("EMP_DATA.dat");
            ch=fin.get();
            while(!fin.eof())
            {
               cout<<ch;
               ch=fin.get();
            }
          }
            break;
    case 2:
           {
           EMP e1;
                e1.getdata();
                e1.putdata();
           }
    default:
           cout<<"\nYou Entered  invalid choice.";
        }
        getch();
    return 0;
}
//   progressing...... should be use file handling
