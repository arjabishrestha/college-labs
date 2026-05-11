/*Create a class called Complex for performing addition, subtraction and multiplication of two complex numbers using the concept of binary operator overloading. Complex number must be in the form of real part +
imaginary part*i. Use appropriate member function to initializes the object. (Use switch case to choose addition subtraction and multiplication)*/
/*operations on complex number*/
#include<iostream>
using namespace std;
class Complex
{
    float real,img;
public:
    Complex()
    {
        real=0;
        img=0;
    }
    void getdata()
    {
        cout<<"enter real and imaginary part ";
        cin>>real>>img;
    }
    Complex operator +(Complex c2)
    {
        Complex s;
        s.real=real+c2.real;
        s.img=img+c2.img;
        return s;
    }
    Complex operator -(Complex c2)
    {
        Complex d;
        d.real=real-c2.real;
        d.img=img-c2.img;
        return d;
    }
    Complex operator *(Complex c2)
    {
        Complex m;
        m.real=real*c2.real-img*c2.img;
        m.img=real*c2.img+img*c2.real;
        return m;
    }
    Complex operator /(Complex c2)
    {
        Complex q;
        q.real=(real*c2.real+img*c2.img)/((c2.real*c2.real)+(c2.img*c2.img));
        q.img=(img*c2.real-real*c2.img)/((c2.real*c2.real)+(c2.img*c2.img));
        return q;
    }
    void display()
    {
        cout<<real<<"+ "<<img<<"i"<<endl;
    }
};
int main()
{
    Complex c1,c2;
    c1.getdata();
    c2.getdata();
    int ch;
    cout<<"choose a number: 1.sum 2.difference 3.product 4.division ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        {
           Complex sum=c1+c2;
            cout<<"Sum is ";
            sum.display();
            break;
        }
    case 2:
        {
            Complex diff=c1-c2;
            cout<<"Difference is ";
            diff.display();
            break;
        }
    case 3:{
        Complex prod=c1*c2;
        cout<<"Product is ";
        prod.display();
        break;
    }
    case 4:{
        Complex div=c1/c2;
        cout<<"Quotient is ";
        div.display();
        break;
    }
    default:
        cout<<"wrong choice "<<endl;
    }
    return 0;
}
