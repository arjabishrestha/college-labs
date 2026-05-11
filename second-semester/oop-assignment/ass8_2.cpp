/*dob multiple exception*/
#include<iostream>
using namespace std;
class Day{};
class Month{};
class dob
{
    int d,m,y;
public:
    dob()
    {
        d=0;m=0;y=0;
    }
    void getdob()
    {
        int dd,mm,yy;
        cout<<"enter date month and year ";
        cin>>dd>>mm>>yy;
        if (dd>31)
            throw Day();
        else if (mm>12)
            throw Month();
        else
        {
            d=dd;
            m=mm;
            y=yy;
        }
    }
    void display()
    {
        cout<<"My dob is "<<d<<"/"<<m<<"/"<<y<<endl;
    }
};
int main()
{
    dob d1;
    try
    {
        d1.getdob();
    }
    catch(Day)
    {
        cout<<"error in day "<<endl;
    }
    catch (Month)
    {
        cout<<"error in month "<<endl;
    }
    d1.display();
    return 0;
}
