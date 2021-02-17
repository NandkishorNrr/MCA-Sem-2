#include <iostream>
#include<string>
#include<conio.h>
using namespace std;
class category
{
private:
    char cat_id[11];
    char cat_name[8];
    char cat_desc[15];

public:
    category()
    {
        cout<<"Enter Cat_id.\n";
        cin>>cat_id;
        cout<<"Enter Cat_name.\n";
        cin>>cat_name;
        cout<<"Enter Cat_description.\n";
        cin>>cat_desc;
    }
    ~category()
    {
        cout<<"\n\nInput successfully.\n\n";
    }
    void showdata();
};
void category::showdata()
{
    cout<<"\nYour Category ID is : "<<cat_id;
    cout<<"\nYour Category is : "<<cat_name;
    cout<<"\nYour Category Description is :"<<cat_desc;
}

int main()
{
   category o1;
   o1.showdata();
    getch();
    return 0;
}
