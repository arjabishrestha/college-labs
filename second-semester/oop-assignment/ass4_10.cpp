/*Write a program having a class to represent money. The class should have two integer members to represent rupees and
paisa. Overload + and – operators for adding and subtracting the objects. Then, overload
>,<,== and != operators for comparing the objects*/
#include<iostream>
using namespace std;
class Money
{
    int r,p;
public:
    Money()
    {
        r=0;
        p=0;
    }
    void getmoney()
    {
        cout<<"enter rs and paisa ";
        cin>>r>>p;
    }
    void display()
    {
        cout<<r<<" rupees "<<p<<" paisa"<<endl;
    }
    Money operator +(Money m2)
    {
        Money s;
        int paisa;
        paisa=p+m2.p+(r+m2.r)*100;
        s.r=paisa/100;
        s.p=paisa%100;
        return s;
    }
    Money operator -(Money m2)
    {
        Money d;
        int paisa;
        paisa=p-m2.p+r*100-m2.r*100;
        d.r=paisa/100;
        d.p=paisa%100;
        return d;
    }
    bool operator >(Money m2)
    {
        if (r>m2.r) return true;
        else if (r==m2.r)
        {
            if (p>m2.p) return true;
        }
        else return false;
    }
    bool operator <(Money m2)
    {
        if (r<m2.r) return true;
        else if (r==m2.r)
        {
            if (p<m2.p) return true;
        }
        else return false;
    }
    bool operator ==(Money m2)
    {
        if (r==m2.r && p==m2.p)
            return true;
        else
            return false;
    }
    bool operator !=(Money m2)
    {
        return  !(*this==m2);
    }
};
int main()
{
    Money m1,m2,sum,diff;
    m1.getmoney();
    m2.getmoney();
    sum=m1+m2;
    diff=m1-m2;
    cout<<"the sum is ";
    sum.display();
    cout<<"the difference is ";
    diff.display();
    if(m1!=m2)
    {
        cout<<"Not equal"<<endl;
        cout<<"Greater one is ";
    if (m1>m2)
        m1.display();
    else
        m2.display();
    cout<<"Smaller one is ";
    if (m1<m2)
        m1.display();
    else
        m2.display();
    }
    else
    {
        if (m1==m2)
        cout<<"they are equal"<<endl;
    }
    return 0;
}
