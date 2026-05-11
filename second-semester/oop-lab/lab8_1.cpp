/*constructor and destructor call in multilevel inheritance*/
#include<iostream>
using namespace std;
class base
{
    int b;
public:
    base(int B)
    {
        b=B;
        cout<<"Base constructor called"<<endl;
    }
    void display()
    {
        cout<<b<<endl;
    }
    ~base()
    {
        cout<<"Base destructor called"<<endl;
    }
};

class first:public base
{
    int n1;
public:
    first(int N1):base(N1)
    {
        n1=N1;
        cout<<"First derived constructor called"<<endl;
    }
    void display()
    {
        cout<<n1<<endl;
    }
    ~first()
    {
        cout<<"First derived destructor called"<<endl;
    }
};
class second:public first
{
    int n2,n3;
public:
    second(int a, int b):first(a)
    {
        n2=a;
        n3=b;
        cout<<"Second derived constructor called"<<endl;
    }
    void display()
    {
        cout<<n2<<endl<<n3<<endl;
    }
    ~second()
    {
        cout<<"Second derived destructor called"<<endl;
    }
};
int main()
{
    first f1(5);
    f1.display();
    second s1(3,9);
    s1.display();
    return 0;
}
