#include <iostream>

using namespace std;

int main()
{
   int A[3][3],B[3][3],C[3][3];
   cout<<"Enter nine number for first matrix\n";
   for(int i=0;i<=2;i++)
    for( int j=0;j<=2;j++)
    cin>>A[3][3];
   cout<<"Enter nine number for second matrix\n";
   for(int i=0;i<=2;i++)
    for(int j=0;j<=2;j++)
    cin>>B[3][3];
    cout<<"Sum of Matrix A and B:  \n";
     for(int i=0;i<=2;i++)
    {
       for(int j=0;j<=2;j++)

     {
          C[i][j]=A[i][j]+B[i][j];
     }
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
    }
    }
    return 0;
}
// wrongS
