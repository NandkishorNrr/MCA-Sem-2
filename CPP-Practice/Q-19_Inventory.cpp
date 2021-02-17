#include <iostream>
#include<string>
#include<conio.h>
#include<fstream>
using namespace std;
class inventory
{
private:
    string name;
    string topic;
    string note;
public:

    void getdata()
    {
     cout<<"Enter Topic : ";
     getline(cin,topic);
     cout<<"\nEnter Your 'Note'\n\n";
     getline(cin,note);
     cout<<"\n\n";
    }
    void putdata()
    {
        ofstream fout;
        fout.open("invetory.dat",ios::app);

        cout<<"\n\n\t\t\t\tNANDKISHOR_Nrr.\n\n\n";
        cout<<"\t\tToday's Topic : "<<topic;
        cout<<"\n\n"<<note;
        cout<<"\n\n";


        fout<<"\n\n\t\t\t\tNANDKISHOR_Nrr.\n\n\n";
        fout<<"\t\tToday's Topic : "<<topic;
        fout<<"\n\n"<<note;
        fout<<"\n\n";

    }
};
int main()
{

    cout<<"You have to Entry, Then only You can see Notes.\n";
    for(int i=1;i<=2;i++)
    switch(i)
    {
    case 1:
        {
            {
                #include<string>
                inventory o1;
                o1.getdata();
                o1.putdata();
            }
           }

            break;
    case 2:
         {
            #include<fstream>
            ifstream fin;
            char ch;
            fin.open("invetory.dat");
            ch=fin.get();
            while(!fin.eof())
            {
               cout<<ch;
               ch=fin.get();
            }
          }

           /*
    default:
           cout<<"\nYou Entered  invalid choice.";
        }*/
        getch();

    return 0;
}
}
