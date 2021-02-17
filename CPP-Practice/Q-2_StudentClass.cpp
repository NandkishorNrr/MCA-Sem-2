#include <iostream>

using namespace std;
class student
{
private:
    int adm_no;
    char s_name[20];
    float eng,math,science,total;
public:
    float cal_total()
    {
     total=eng+math+science;
     return total;
    }
    void takedata()
    {
        cout<<"Enter adm_no.,s_name and marks of eng, math, science.\n";
        cin>>adm_no>>s_name>>eng>>math>>science;
    }
    void showdata()
    {
        cout<<"\nadm_no :"<<adm_no<<endl;
        cout<<"s_name :"<<s_name<<endl;
        cout<<"marks  "<<endl;
        cout<<"eng :"<<eng<<endl;
        cout<<"math :"<<math<<endl;
        cout<<"science :"<<science<<endl;
    }
};

int main()
{
    student s1;
    s1.takedata();

    s1.showdata();
    cout<<"\nTotal marks : "<<s1.cal_total();
    return 0;
}
