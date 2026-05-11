/*structure passing to function*/
#include<iostream>
using namespace std;
struct date{
    int m,d,y;
};
void display(struct date);
int main()
{
    struct date d1;
    cout<<"enter month(mm) ";
    cin>>d1.m;
    cout<<"enter day(dd) ";
    cin>>d1.d;
    cout<<"enter year(yyyy) ";
    cin>>d1.y;
    display(d1);
    return 0;
}
void display(struct date d1)
{
    cout<<d1.m<<"/"<<d1.d<<"/"<<d1.y;
}
