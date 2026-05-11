/*time addition using overloading*/
#include<iostream>
using namespace std;
class Time
{
    int hour,minute,second;
public:
    Time()
    {
        hour=0;
        minute=0;
        second=0;
    }
    Time(int h, int m, int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    void display()
    {
        cout<<hour<<" hours "<<minute<<" mins "<<second<<" secs ";
    }
    Time operator +(Time t1)
    {
        int sec=second+t1.second+(minute+t1.minute)*60+(hour+t1.hour)*3600;
        Time sum;
        sum.hour=sec/3600;
        sum.minute=(sec%3600)/60;
        sum.second=(sec%3600)%60;
        return sum;
    }
};
int main()
{
    Time t1(12,45,5),t2(11,11,11),add;
    add=t2+t1;
    cout<<"The sum is ";
    add.display();
    return 0;
}
