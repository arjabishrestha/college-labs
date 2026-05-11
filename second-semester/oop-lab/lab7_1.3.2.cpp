/*user defined to user defined*/
/*convert dollar to rs*/
#include<iostream>
using namespace std;
class rupees
{
    int RS;
public:
    rupees()
    {
        RS=0;
    }
    rupees(int r)
    {
        RS=r;
    }
    void display()
    {
        cout<<RS<<" rupees ";
    }
};
class dollar
{
    int Do;
public:
    dollar()
    {
        Do=0;
    }
    void getdollar()
    {
        cout<<"enter dollar ";
        cin>>Do;
    }
    operator rupees()
    {
        int npr;
        npr=Do*132;
        return (rupees(npr));
    }
};
int main()
{
    dollar d1;
    rupees r1;
    d1.getdollar();
    r1=d1;
    r1.display();
    return 0;
}
