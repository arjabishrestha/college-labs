/*Write a class description for a fraction, which is a rational number, composed of two
integral numbers. Write methods for addition, subtraction, multiplication and division
of the fractions. Illustrate the implementation of your methods*/
#include<iostream>
using namespace std;
class fraction
{
    int p,q;
public:
    fraction()
    {
        p=0;
        q=1;
    }
    void getfraction()
    {
        cout<<"enter numerator and denominator ";
        cin>>p>>q;
    }
    fraction add(fraction num2)
    {
        fraction s;
        s.p=p*num2.q+num2.p*q;
        s.q=q*num2.q;
        return s;
    }
    fraction sub(fraction num2)
    {
        fraction d;
        d.p=p*num2.q-num2.p*q;
        d.q=q*num2.q;
        return d;
    }
    fraction mul(fraction num2)
    {
        fraction m;
        m.p=p*num2.p;
        m.q=q*num2.q;
        return m;
    }
    fraction div(fraction num2)
    {
        fraction r;
        r.p=p*num2.q;
        r.q=q*num2.p;
        return r;
    }
    void display()
    {
        cout<<p<<"/"<<q<<endl;
    }
};
int main()
{
    fraction num1,num2,sum,diff,prod,quot;
    num1.getfraction();
    num2.getfraction();
    sum=num1.add(num2);
    diff=num1.sub(num2);
    prod=num1.mul(num2);
    quot=num1.div(num2);
    cout<<"sum is ";
    sum.display();
    cout<<"diff is ";
    diff.display();
    cout<<"product is ";
    prod.display();
    cout<<"quotient is ";
    quot.display();
}
