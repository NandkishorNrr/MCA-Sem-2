// Q-1 Write a program to display the minimum, maximum, sum and average of elements of an array.
#include <iostream>
#include <conio.h>
using namespace std;
//template<class T>
int finMin(int arr[], int n)
{
    int i;
    int min;
    min = arr[0];

    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return (min);
}
int finMax(int arr[], int n)
{
    int i;
    int max;
    max = arr[0];

    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    return (max);
}
int main()
{
    int z;
    float sum=0, avg=0;
    cout << "Enter the size of Array.\n";
    cin >> z;
    int iarr[z];

    cout << "Integer values\n";
    for (int i = 0; i < z; i++)
    {
        cout << " " << i + 1 << " : ";
        cin >> iarr[i];
    }
    for (int i = 0; i < z; i++)
    {
        sum = sum + iarr[i];
    }
    avg = sum / z;
    cout << "Generic Function of an Array(Entered)\n\n";
    cout << "\nSmallest integer is :  " << finMin(iarr, z);
    cout << "\nGreatest integer is :  " << finMax(iarr, z);
    cout << "\nSum of the given number is : " << sum;
    cout << "\nAverage of the given number is : " << avg;
    return 0;
}
