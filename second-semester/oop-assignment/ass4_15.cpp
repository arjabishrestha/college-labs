/*Write a program that will convert object from a class that represents degree to object of
a class that represents radian angular measurement*/
/*degree to radian*/
#include<iostream>
using namespace std;
#define pi 3.14159
class Degree
{
    float deg;
public:
    Degree()
    {
        deg=0;
    }
    void getdegree()
    {
        cout<<"enter angle in degree ";
        cin>>deg;
    }
    float givedegree()
    {
        return deg;
    }
};
class Radian
{
    float rad;
public:
    Radian()
    {
        rad=0;
    }
    Radian(Degree d)
    {
        rad=d.givedegree()*pi/180;
    }
    void display()
    {
        cout<<"Angle in radian is "<<rad;
    }
};
int main()
{
    Degree ad;
    Radian ar;
    ad.getdegree();
    ar=ad;
    ar.display();
    return 0;
}
