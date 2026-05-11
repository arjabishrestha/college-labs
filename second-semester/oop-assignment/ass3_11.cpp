/*Write a program
with a class that represent rectangle. The program should have constructors and other
member functions to calculate area and perimeter and display sides, area and perimeter.*/
#include<iostream>
using namespace std;
class rectangle
{
    int l,b;
public:
    rectangle()
    {
        cout<<"enter length and breadth ";
        cin>>l>>b;
    }
    int area()
    {
        return l*b;
    }
    int peri()
    {
        return 2*(l+b);
    }
    void display_sides()
    {
        cout<<l<<"\t"<<b<<endl;
    }
    void display(int a,int v)
    {
        cout<<a<<"\t"<<v<<endl;
    }
};
int main()
{
    int a,p;
    rectangle r1;
    a=r1.area();
    p=r1.peri();
    r1.display_sides();
    r1.display(a,p);
    return 0;
}




