#include <iostream>

using namespace std;

void test(int x)
{
    try
    {
        if(x==1) throw x;  //int
        else
            if(x==0) throw 'x';  //char
        else
            if(x==-1) throw 1.0;  //double
        cout<<"End of try-block\n";
    }
    catch(char c)  //catch 1
    {
        cout<<"Caught a character \n";
    }
    catch(int m)  //catch 2
    {
        cout<<"Caught an int\n";
    }
    catch(double d)  //catch 3
    {
        cout<<"Caught a double\n";
    }
    cout<<"End of try-catch system\n\n";
}

int main()
{
    cout <<"Testing Multiple Catches" << endl;
    cout<<"x == 1\n";
    test(1);
    cout<<"x == 0\n";
    test(0);
    cout<<"x == -1\n";
    test(-1);
    cout<<"x ==2 \n";
    test(2);

    return 0;
}
