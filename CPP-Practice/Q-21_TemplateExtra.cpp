#include <iostream>

using namespace std;
template<class X>class Arraylist
{
private:
    struct ControlBloc
    {
        int capacity;
        X *arr_ptr;
    };
    ControlBloc *s;
public:
    Arraylist(int capacity)
    {
        s=new ControlBloc;
        s->capacity=capacity;
        s->arr_ptr=new X[s->capacity];
    }
    void addElement(int index,X data)
    {
        if(index>=0&&index<=s->capacity-1)
            s->arr_ptr[index]=data;
        else
            cout<<"\nArray index is not valid";
    }
    void viewElement(int index, X &data)
    {
        if(index>=0&&index<=s->capacity-1)
            {
                data=s->arr_ptr[index];
            cout<<"Value in the Array is : "<<data;
            }
       else
        cout<<"\nArray index is not valid";
    }
    void viewList()
    {
        int i;
        for(i=0;i<s->capacity;i++)
          {
              cout<<"\t"<<s->arr_ptr[i];
          }
    }
};
int main()
{
    int data;
   Arraylist<int>list1(5);
   list1.addElement(0,5);
   list1.addElement(1,9);
   list1.addElement(2,8);
   list1.addElement(3,7);
   list1.viewElement(2,data);
   list1.viewList();
   //list1.viewList();
    return 0;
}
