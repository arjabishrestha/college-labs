/*time exception handling*/
#include<iostream>
#include<string.h>
using namespace std;
class check
{
public:
    int c;
    char desc[20];
    check()
    {
        c=0;
        strcpy(desc,"\0");
    }
    check(int t,char d[])
    {
        c=t;
        strcpy(desc,d);
    }
};
class time
{
    int hr,mins,sec;
public:
    time()
    {
        hr=0;mins=0;sec=0;
    }
    void readtime(int,int,int);
    void display()
    {
        cout<<"The time is "<<hr<<":"<<mins<<":"<<sec<<endl;
    }
};
void time::readtime(int h, int m, int s) throw (int)
    {
        if (h>24)
            throw check(h,"Exception:hour");
        else if (m>60)
            throw check(m,"Exception:minute");
        else if (s>60)
            throw check(s,"Exception:second");
        else if (h<=24||m<=60||s<=60)
        {
            hr=h;
            mins=m;
            sec=s;
        }
    }
int main()
{
    time t1;
    try
    {
       t1.readtime(5,10,90);
    }
    catch(check n)
    {
        cout<<"Exception while reading time"<<endl;
        cout<<n.c<<" cannot be read as "<<n.desc<<endl;
    }
    t1.display();
    return 0;
}
