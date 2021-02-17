#include <iostream>

using namespace std;
class figure
{
public:
   virtual void draw()=0;

};

class square:public figure
    {
        void drow()
        {
            cout<<"It is square cls\n";
        }
    };

class triangle:public figure
    {
        void drow()
        {
            cout<<"It is triangle cls\n";
        }
    };


int main()
{
    square s1;
    triangle t1;
    s1.draw();
    t1.draw();

    return 0;
}

// panding
