#include <iostream>

using namespace std;
class Rectangle
{
private:
    float l,w;
public:
    void setlenghth(float len)
    {
        l=len;
    }
    void setwidth(float wid)
    {
        w=wid;
    }
    float perimeter()
    {
        float peri;
        peri=2*(l+w);
        return peri;
    }
    float area()
    {
        float ar;
        return(ar=l*w);
    }
    void show()
    {
        cout<<"\nLength of rectangle is :"<<l;
        cout<<"\nWidth of rectangle is :"<<w;
    }
    int sameArea(Rectangle)
    {

    }

};
int main()
{
   Rectangle r1,r2;
   r1.setlenghth(5);
   r1.setwidth(2.5);
   r2.setlenghth(5);
   r2.setwidth(18.9);
   cout<<"\nR1\n";
   r1.show();
   cout<<"\n\nR2";
   r2.show();
      float R1,R2;
   R1=r1.area();
   R2=r2.area();
   cout<<"\n\nArea of R1 :\n";
   cout<<R1;
   cout<<"\nPerimeter of R1 :\n";
   cout<<r1.perimeter();
   cout<<"\n\nArea of R2 :\n";
   cout<<R2;
   cout<<"\nPerimeter of R2 :\n";
   cout<<r2.perimeter();
   cout<<"\n\nNow Checking for Equality of RECTANGLE\n\n ";
   if(R1==R2)
    cout<<"Area Rectangle 1 = Area Rectangle 2\n";
   else
    cout<<"Area Rectangle 1 != Area Rectangle 2\n";

    cout<<"\n\n*****When FIRT RECTANGLE Changed*****\n\n";


     r1.setlenghth(15);
   r1.setwidth(6.3);
   r2.setlenghth(5);
   r2.setwidth(18.9);
   cout<<"\nR1\n";
   r1.show();
   cout<<"\n\nR2";
   r2.show();
//      float R1,R2;
   R1=r1.area();
   R2=r2.area();
   cout<<"\n\nArea of R1 :\n";
   cout<<R1;
   cout<<"\nPerimeter of R1 :\n";
   cout<<r1.perimeter();
   cout<<"\n\nArea of R2 :\n";
   cout<<R2;
   cout<<"\nPerimeter of R2 :\n";
   cout<<r2.perimeter();
   cout<<"\n\nNow Checking for Equality of RECTANGLE\n\n ";

   if(R1==R2)
    cout<<"Area Rectangle 1 = Area Rectangle 2\n";
   else
    cout<<"Area Rectangle 1 != Area Rectangle 2\n";
    return 0;
}
