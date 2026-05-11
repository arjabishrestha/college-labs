/*Write a program that display the total time in 24-hour clock format having fixed time
12:34:56 and 10:35:14. One constructor should initialize member data hour, minute and
second to 0 and another should initialize it to fixed value. Other two member functions
should add two objects of type time passed as arguments and display the result*/
#include<iostream>
using namespace std;
class time
{
    int hour,minute,second;
public:
    time()
    {
        hour=0;
        minute=0;
        second=0;
    }
    time(int h,int m, int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    time add(time t2)
    {
        time sum;
        int tsec;
        tsec=second+t2.second+minute*60+t2.minute*60+hour*3600+t2.hour*3600;
        sum.hour=tsec/3600;
        sum.minute=(tsec%3600)/60;
        sum.second=(tsec%3600)%60;
        sum.hour=sum.hour%24;
        return sum;
    }
    void display()
    {
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};
int main()
{
    time t1(12,34,56),t2(10,35,14),t3;
    t3=t1.add(t2);
    t3.display();
}

