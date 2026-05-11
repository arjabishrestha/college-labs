/*Write a program to overload the relational operators to compare the length (in meter and centimeter) of two objects*/
#include<iostream>
using namespace std;
class Meter
{
    float m;
public:
    Meter()
    {
        m=0;
    }
    void getmeter()
    {
        cout<<"enter length in meter ";
        cin>>m;
    }
};
class Centimeter
{
    float cm;
public:
    Centimeter()
    {
        cm=0;
    }
    void getcentimeter()
    {
        cout<<"enter length in cm ";
        cin>>cm;
    }

};
