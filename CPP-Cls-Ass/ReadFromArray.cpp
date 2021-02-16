#include <iostream>

using namespace std;

int main()
{
    int i=0,n,a[]={8,9,5,9,6};

    cout << "Enter a number 0-4 as index no. to excess." << endl;
    cin>>n;
    try
    {
        if(n<5)
            {
                cout<<"a["<<n<<"] ="<<a[n];
            }
        else
            {
                cout<<"\nThrows Exception...\n";
                throw(n);
            }
    }
    catch(int i)
    {
        cout<<"You entered out of index.\n";
    }

    return 0;
}
