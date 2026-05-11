/*lecturer inheritance*/
#include<iostream>
using namespace std;
class lecturer
{
    int id;
    string name;
public:
    void readdata()
    {
        cout<<"enter lecture id ";
        cin>>id;
        cout<<"enter name of the lecturer ";
        cin>>name;
    }
    void printdata()
    {
        cout<<"Lecture id: "<<id<<endl<<"Name: "<<name<<endl;
    }
};
class parttime: public lecturer
{
    float payperhr;
public:
    void readdata()
    {
        lecturer::readdata();
        cout<<"enter salary per hour ";
        cin>>payperhr;
    }
    void printdata()
    {
        lecturer::printdata();
        cout<<"Salary paid per hour "<<payperhr<<endl;
    }
};
class fulltime:public lecturer
{
    float paypermonth;
public:
    void readdata()
    {
        lecturer::readdata();
        cout<<"enter salary per month ";
        cin>>paypermonth;
    }
    void printdata()
    {
        lecturer::printdata();
        cout<<"Salary paid per month "<<paypermonth<<endl;
    }
};
int main()
{
    parttime t1;
    fulltime t2;
    cout<<"Part time lecturer "<<endl;
    t1.readdata();
    t1.printdata();
    cout<<"Full time lecturer "<<endl;
    t2.readdata();
    t2.printdata();
    return 0;
}
