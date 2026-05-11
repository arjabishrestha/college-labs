/*Write a class Date that uses pre increment and post increment operators to add 1 to the
day in the Date object, while causing appropriate increments to the month and year. chatgpt has a better version for this*/
#include<iostream>
using namespace std;
class Date
{
    int d,m,y;
    int daylist[12];
public:
    Date()
    {
        d=0;m=0;y=0;
        int daylist[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    }
    void getdate()
    {
        cout<<"Enter day month and year ";
        cin>>d>>m>>y;
    }
    void display()
    {
        cout<<d<<"-"<<m<<"-"<<y<<endl;
    }
    void leap()
    {
        if ((y%4 ==0 && y%100!= 0)||(y % 400 == 0))
        {
            daylist[1]=29;
            cout<<"Leap year "<<endl;
        }

    }
    void operator ++()
    {
        if(d<daylist[m-1]) d++;
        else if(m<12) m++;
        else y++;
    }
    void operator ++(int)
    {
        if(d<30) d++;
        else if(m<12)
        {
            m++;
            d=1;
        }
        else
        {
           y++;
           d=1;
           m=1;
        }

    }
};
int main()
{
    Date d1,d2;
    d1.getdate();
    d1.leap();
    cout<<"Original date 1 ";
    d1.display();
    ++d1;
    cout<<"pre increment "<<endl;
    d1.display();
    d2.getdate();
    cout<<"Original date 2 ";
    d2.display();
    d2++;
    cout<<"post increment "<<endl;
    d2.display();
    return 0;
}
