#include <iostream>
#include<fstream>
#include<conio.h>

using namespace std;

class student
{
private:
    char name[30];
    int age;
public:
    void getdata()
    {
        cout<<"Enter name : "; cin.getline(name,30); // generally used for char... in the sentanse which contain space...
        cout<<"Enter age : "; cin>>age;
    }

    void showdata()
    {
        cout<<"Name : "<<name<<endl<<"Age :"<<age<<endl;
    }
};

int main()
{
    student s;
    fstream file;
    //open file in write mode
    file.open("aaa.txt",ios::out);   // 'app' to add append mode
    if(!file)
    {
       cout<<"Error is creating file..."<<endl;
    }
    cout<<"File created successfully."<<endl;
    //write into file
    s.getdata();  //read form user
    file.write((char*)&s,sizeof(s));  //write into file
    file.close();
    cout<<"\nFile saved and closed successfully."<<endl;
    //re open file in input mode
    //open file
    fstream file1;
    //again open file in read mode
    file1.open("aaa.txt",ios::in);
    if(!file1) //if do not have any problem then file return 1 else 0
    {
        cout<<"Error in opening file...";
        return 0;
    }
    //read data from file
    file1.read((char*)&s,sizeof(s));   //'(char*)&s' this is for char reading
       //display data on monito
    s.showdata();
    //close the file
    file.close();
    getch();

    return 0;
}
