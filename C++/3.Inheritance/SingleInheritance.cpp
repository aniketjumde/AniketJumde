#include<iostream>
using namespace std;

class A
{
    public:
    void show()
    {
        cout<<"I am show in A"<<endl;
    }
};
class B:public A
{
    public:
    void display()
    {
        cout<<"I am Display in B"<<endl; //there are two member function in B(show,display)
    }
};

int main()
{
    B ob;
    ob.show();
    ob.display();
};