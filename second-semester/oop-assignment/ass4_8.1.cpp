/*Write a program with a class to represent date. Overload operators such that dates represented by two objects of your
class can be compared using >, <, == and != operators ( for < and > operators, consider
a date which is earlier as smaller)*/
#include<iostream>
using namespace std;
class Date
{
    int m,d,y;
public:
    Date()
    {
        m=0;
        d=0;
        y=0;
    }
    void getdate()
    {
        cout<<"enter month date and year: ";
        cin>>m>>d>>y;
    }
    void display()
    {
        cout<<m<<"\t"<<d<<"\t"<<y<<endl;
    }
    bool operator >(Date d2)
    {
        if (y>d2.y) return true;
        else if(y==d2.y && m>d2.m) return true;
        else if(y == d2.y && m == d2.m && d > d2.d) return true;
        else return false;
    }
    bool operator <(Date d2)
    {
        if (y<d2.y) return true;
        else if(y==d2.y && m<d2.m) return true;
        else if(y == d2.y && m == d2.m && d < d2.d) return true;
        else return false;
    }
    bool operator ==(Date d2)
    {
        return (y==d2.y && m==d2.m && d==d2.d);
    }
    bool operator !=(Date d2)
    {
        return !(*this== d2);
    }
};
int main()
{
    Date d1,d2;
    d1.getdate();
    d2.getdate();
    cout<<"The smaller date is ";
    if (d1<d2)
        d1.display();
    else
        d2.display();
    cout<<"The greater date is ";
    if (d1>d2)
        d1.display();
    else
        d2.display();
    if (d1==d2)
        cout<<"same date "<<endl;
    if (d1!=d2)
        cout<<"different date"<<endl;
    return 0;
}
