/*operations on complex number*/
#include<iostream>
using namespace std;
class complex
{
    int real,img;
public:
    void getdata()
    {
        cout<<"enter real and imaginary part ";
        cin>>real>>img;
    }
    void add(complex a, complex b)
    {
        cout<<"sum = "<<a.real+b.real<<"+ "<<a.img+b.img<<"i"<<endl;
    }
    void diff(complex a, complex b)
    {
        cout<<"diff = "<<a.real-b.real<<"+ "<<a.img-b.img<<"i"<<endl;
    }
    void mul(complex a, complex b)
    {
        float rp,ip;
        rp=a.real*b.real-a.img*b.img;
        ip=a.real*b.img+a.img*b.real;
        cout<<"product = "<<rp<<"+ "<<ip<<"i"<<endl;
    }
    void div(complex a, complex b)
    {
        float rp,ip;
        rp=(a.real*b.real+a.img*b.img)/((b.real*b.real)+(b.img*b.img));
        ip=(a.img*b.real-a.real*b.img)/((b.real*b.real)+(b.img*b.img));
        cout<<"div = "<<rp<<"+ "<<ip<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.add(c1,c2);
    c3.diff(c1,c2);
    c3.mul(c1,c2);
    c3.div(c1,c2);
}
