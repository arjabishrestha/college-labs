/*user defined to user defined*/
/*convert (dollar, cent) to (rs, paisa)*/
#include<iostream>
using namespace std;
class rupees
{
    int RS,paisa;
public:
    rupees()
    {
        RS=0;
        paisa=0;
    }
    rupees(int r,int p)
    {
        RS=r;
        paisa=p;
    }
    void display()
    {
        cout<<RS<<" rupees "<<paisa<<" paisa ";
    }
};
class dollar
{
    int Do,cent;
public:
    dollar()
    {
        Do=0;
        cent=0;
    }
    void getdollar()
    {
        cout<<"enter dollar and cents ";
        cin>>Do>>cent;
    }
    operator rupees()
    {
        int npr,np;
        npr=Do*132;
        np=cent*132;
        if (np>100)
        {
            npr=npr+(np/100);
            np=np%100;
        }
        return (rupees(npr,np));
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

