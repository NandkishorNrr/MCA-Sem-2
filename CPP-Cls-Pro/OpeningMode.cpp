#include <iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
    fstream new_file;
    new_file.open("new_file_write.txt",ios::out);
    cout<<"New file created.\n";
    new_file<<"Learning File handling In Cpp.\n";
    new_file.close();

    new_file.open("new_file_write.txt",ios::in);
   /*
    const int N=80;
    char line[N];
    while(new_file)      //wiht help of getline function...
    {
        new_file.getline(line,N);
        cout<<line;
    }
  
                 Or
  
       while(!new_file.eof())    //with help of getline fucn with eof fucn and not operator...
    {
        new_file.getline(line,N);
        cout<<line;
    }
    */
    char c;
    c=new_file.get();
    
	while(!new_file.eof())  //With help of get() fucn..
    {
    	cout<<c;
    	c=new_file.get();
	}
	
    new_file.close();
   getch();
    return 0;
}



