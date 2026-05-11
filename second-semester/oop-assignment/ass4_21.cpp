/*Write a program that converts object that represents 24 hours time to 12 hours time and vice versa.*/
#include<iostream>
#include<string.h>
using namespace std;
class time_12;
class time_24
{
    int h,m,s;
public:
    time_24()
    {
        h=0;m=0;s=0;
    }
    void gettime()
    {
        cout<<"enter hr, min and second 24 hr format ";
        cin>>h>>m>>s;
    }
    int givehr()
    {
        return h;
    }
    int givemin()
    {
        return m;
    }
    int givesec()
    {
        return s;
    }
    void display24()
    {
        cout<<"24 hour format "<<endl;
        cout<<h<<"hrs "<<m<<" mins "<<s<<" secs"<<endl;
    }
    time_24 (time_12 tee);
};
class time_12
{
    int hr,mn,sc;
    string ch;
public:
    time_12()
    {
        hr=0;mn=0;sc=0;
    }
    void gettime12()
    {
        cout<<"enter 12 hour time ";
        cin>>hr>>mn>>sc;
    }
    time_12 (time_24 t)
    {
        int h24;
        h24=t.givehr();
        if (h24>12)
        {
            hr=h24-12;
            strcpy(ch,"PM");
        }
        else
        {
            hr=h24;
            strcpy(ch,"AM");
        }
        mn=t.givemin();
        sc=t.givesec();
    }
    int get_hr()
    {
        return hr;
    }
    int minute()
    {
        return mn;
    }
    int second()
    {
        return sc;
    }
    string get_ch()
    {
        return ch;
    }
    void display()
    {
        cout<<"12 hour format "<<endl;
        cout<<hr<<" hours "<<mn<<" mins "<<sc<<" secs "<<ch<<endl;
    }
};
time_24::time_24 (time_12 tee)
    {
        int h12;
        h12=tee.get_hr();
        if (strcmp(tee.get_ch,"PM")==0 || strcmp(tee.get_ch,"pm")==0)
            h=h12+12;
        else
            h=h12;
        m=tee.minute();
        s=tee.second();
    }
int main()
{
    time_24 t24s,t24d;
    time_12 t12s,t12d;
    t24s.gettime();
    t12d=t24s;
    t12d.display();
    t12s.gettime12();
    t24d=t12s;
    t24d.display24();
    return 0;
}
