#include <iostream>

using namespace std;
class cal_volum
{
private:
    float l,b,h,r;
public:
    float volume(float r,float h)
    {
        cout<<"Volume of cylinder is :"<<2*3.14*r*h;
    }
    float volume(float l,float b,float h)
    {
        cout<<"\nVolume of Cuboid id :"<<l*b*h;
    }
    float volume(float r)
    {
        cout<<"\nVolume of sphere is :"<<4*3.14*r*r;
    }
};
int main()
{
    cal_volum v1;
    v1.volume(10.0,10.0);
    v1.volume(1,2,3);
    v1.volume(0.25);
    return 0;
}
