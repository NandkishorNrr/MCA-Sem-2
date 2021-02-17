#include <iostream>
#include<conio.h>
using namespace std;

template<class T>
T finMin(T arr[],int n)
{
    int i;
    T min;
    min=arr[0];

    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];
    }

    return(min);
}
int main()
{
    int z;
    cout<<"Enter the size of Array.\n";
    cin>>z;
    int iarr[z];

    cout<<"Integer values\n";
    for(int i=0;i<z;i++)
    {
        cout<<" "<< i+1<< " : ";
        cin>>iarr[i];
    }
    cout<<"Generic Function to find Minimum value form Array(Entered)\n\n";
    cout<<"\nSmallest integer is :  "<<finMin(iarr,z);


    return 0;
}
