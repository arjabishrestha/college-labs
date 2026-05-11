/* swap two numbers using friend function concept*/
#include<iostream>
using namespace std;
class B;
class A
{
    int a;
public:
    A()
    {
        cout<<"enter a ";
        cin>>a;
    }
    friend swap(A&,B&);
    void display_a()
    {
        cout<<"a="<<a<<endl;
    }
};
class B
{
    int b;
public:
    B()
    {
        cout<<"enter b ";
        cin>>b;
    }
    friend swap(A&,B&);
    void display_b()
    {
        cout<<"b="<<b<<endl;
    }
};
swap(A &a1, B &b1)
{
    int temp=a1.a;
    a1.a=b1.b;
    b1.b=temp;
}
int main()
{
    A a1;
    B b1;
    cout<<"\n Before swapping"<<endl;
    a1.display_a();
    b1.display_b();
    cout<<"\n After swapping"<<endl;
    swap(a1,b1);
    a1.display_a();
    b1.display_b();
}

