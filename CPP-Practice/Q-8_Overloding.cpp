#include <iostream>

using namespace std;
class date
{
private:
    int dd,mm,yy;
public:

    date operator+(date n)
    {
        date temp;
        temp.dd=dd+n.dd;
        temp.mm=mm+n.mm;
        temp.yy=yy+n.yy;
        return(temp);
    }
  friend ostream& operator<<(ostream&,date);
  friend istream& operator>>(istream&, date&);
};
ostream& operator<<(ostream &ct,date d)
{
    cout<<"\ndd="<<d.dd<<"\tmm="<<d.mm<<"\tyy="<<d.yy;
    return ct;
}
istream& operator>>(istream&din, date& d)
{
    cin>>d.dd>>d.mm>>d.yy;
    return din;
}
int main()
{
    date d1,d2,d3;
    cout<<"Enter 'DATE_1' in the form of DD/MM/YY.\n";
    cin>>d1;
     cout<<"Enter 'DATE_2' in the form of DD/MM/YY.\n";
     cin>>d2;
    d3=d1+d2;
    cout<<d3;

    return 0;
}
// we can do by by using function..
/*  void getdata()
    {
        cout<<"Enter dd, mm, yy :\n";
        cin>>dd>>mm>>yy;
    }
    void show()
    {
        cout<<"date :"<<dd<<"\nmonth :"<<mm<<"\nyear :"<<yy;
    }
    */
