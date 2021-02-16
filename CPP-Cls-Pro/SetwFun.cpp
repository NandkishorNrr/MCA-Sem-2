#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    //initializing the width
    int num=50;
    cout << "Before setting the width." <<endl<<num<<endl;
            //using setw()
    cout<<"Setting the width."<<"Using setw to 5: \n"<<setw(5);
    cout<<num<<endl;

    return 0;
}
