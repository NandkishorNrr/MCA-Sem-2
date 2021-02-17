#include <iostream>
#include<conio.h>
#include<string>
using namespace std;
class product
{
private:
    string speci,name;
    float price;
public:
    void input();
    inline void show();
};
void product::input()
{
    cout<<"Enter Name of product : ";
     getline(cin,name);
    cout<<"\nEnter price of Product : ";
    cin>>price;
    cout<<"\nEnter Specification of Product : \n\t";
    getline(cin,speci);
    cout<<endl<<speci;
    getline(cin,speci);

    cout<<"\n\n\t***\n\n";
}
void product::show()
{
     cout<<"\nName of product : "<<name;
     cout<<"\nPrice of Product : "<<price;
      cout<<"\nSpecification of Product :"<<speci;
}
int main()
{
    product p1;
    p1.input();
    p1.show();
    getch();
	return 0; 
}
