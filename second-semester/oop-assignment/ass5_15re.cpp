/*Write base class that ask the user to enter a complex number and derived class adds the complex number of its own with the base.Finally make third class that is friend of
derived and calculate the difference of a complex number in base class and its own complex number. */
#include<iostream>
using namespace std;
class myfriend;
class Complex
{
protected:
    int r,i;
public:
    void getBcomplex()
    {
        cout<<"Complex number for base class "<<endl;
        cout<<"enter real part and imaginary part ";
        cin>>r>>i;
    }
    void displayB()
    {
        cout<<r<<"+"<<i<<"i"<<endl;
    }
};
class derived:public Complex
{
public:
    int real,img;
public:
    derived()
    {
        real=0;img=0;
    }
    void getDcomplex()
    {
        cout<<"Complex number for derived class "<<endl;
        cout<<"enter real part and imaginary part ";
        cin>>real>>img;
    }
    void displayD()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    void Sum()
    {
        real=r+real;
        img=i+img;
    }
    friend class myfriend;
};
class myfriend
{
    int freal, fimg;
public:
    myfriend()
    {
        freal=0;
        fimg=0;
    }
    void getFcomplex()
    {
        cout<<"complex number for base class "<<endl;
        cout<<"enter real part and imaginary part ";
        cin>>freal>>fimg;
    }
    void diff(derived n)
    {
        freal=n.r-freal;
        fimg=n.i-fimg;
    }
    void displayF()
    {
        cout<<freal<<"+"<<fimg<<"i"<<endl;
    }
};
int main()
{
    derived d1,s;
    myfriend f1;
    d1.getBcomplex();
    d1.getDcomplex();
    f1.getFcomplex();
    cout<<"base class complex number is ";
    d1.displayB();
    cout<<"derived class complex number is ";
    d1.displayD();
    cout<<"friend class complex number is ";
    f1.displayF();
    d1.Sum();
    f1.diff(d1);
    cout<<"The sum is";
    d1.displayD();
    cout<<"The diff is";
    f1.displayF();
    return 0;
}
