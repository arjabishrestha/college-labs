/*Write a class to store x, y, z coordinates of a point in three-dimensional space. Using
overloading, write friend functions to add and subtract the vectors.*/
/*overload + and - using friend function*/
#include<iostream>
using namespace std;
class Coordinate
{
    int x,y,z;
public:
    Coordinate()
    {
        x=0;y=0;z=0;
    }
    void getdata()
    {
        cout<<"enter x,y,z ";
        cin>>x>>y>>z;
    }
    void display()
    {
        cout<<"("<<x<<", "<<y<<", "<<z<<")"<<endl;
    }
    friend Coordinate operator +(Coordinate, Coordinate);
    friend Coordinate operator -(Coordinate, Coordinate);
};
Coordinate operator +(Coordinate c1, Coordinate c2)
{
    Coordinate sum;
    sum.x=c1.x+c2.x;
    sum.y=c1.y+c2.y;
    sum.z=c1.z+c2.z;
    return sum;
}
Coordinate operator -(Coordinate c1, Coordinate c2)
{
    Coordinate diff;
    diff.x=c1.x-c2.x;
    diff.y=c1.y-c2.y;
    diff.z=c1.z-c2.z;
    return diff;
}
int main()
{
    Coordinate a,b,add,sub;
    a.getdata();
    b.getdata();
    add=a+b;
    sub=a-b;
    cout<<"The sum is ";
    add.display();
    cout<<"The difference is ";
    sub.display();
    return 0;
}

