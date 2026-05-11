/*add and subtract two time values*/
#include<iostream>
using namespace std;
class time
{
    int h,m,s;
public:
    void getdata()
    {
        cout<<"enter hour, minute and second ";
        cin>>h>>m>>s;
    }
    void display()
    {
        cout<<h<<"hour "<<m<<"mins "<<s<<"secs "<<endl;
    }
    time add(time t1)
    {
        int sec;
        time sum;
        sec=t1.s+s+t1.m*60+m*60+t1.h*3600+h*3600;
        sum.h=sec/3600;
        sum.m=(sec%3600)/60;
        sum.s=(sec%3600)%60;
        return sum;
    }
    time sub(time t1)
    {
        int sec;
        time diff;
        sec=t1.s-s+t1.m*60-m*60+t1.h*3600-h*3600;
        diff.h=sec/3600;
        diff.m=(sec%3600)/60;
        diff.s=(sec%3600)%60;
        return diff;
    }
};
int main()
{
    time T1,T2,sum,diff;
    T1.getdata();
    T2.getdata();
    sum=T2.add(T1);
    diff=T2.sub(T1);
    cout<<"sum ";
    sum.display();
    cout<<"difference ";
    diff.display();
    return 0;
}
