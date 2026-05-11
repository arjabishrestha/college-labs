/*Write two classes to store distances in meter-centimeter and feet-inch system respectively. Write conversion functions so that the program can convert objects of both
types*/
#include<iostream>
using namespace std;
class feet
{
    int f,i;
public:
    feet()
    {
        f=0;i=0;
    }
    void getfeet()
    {
        cout<<"enter distance in feet and inch ";
        cin>>f>>i;
    }
    void displayfeet()
    {
        cout<<f<<" ft and "<<i<<" inches"<<endl;
    }
    feet (int ft,int in)
    {
        f=ft;
        i=in;
    }
    int givefeet()
    {
        return f;
    }
    int giveinch()
    {
        return i;
    }
};
class meter
{
    int m,cm;
public:
    meter()
    {
        m=0;cm=0;
    }

    void getmeter()
    {
        cout<<"enter distance in m and cm ";
        cin>>m>>cm;
    }
    void displaymeter()
    {
        cout<<m<<" meters and "<<cm<<" centimeters"<<endl;
    }
    operator feet()
    {
        int feets,inch,s_cm,s_inch;
        s_cm=m*100+cm;
        s_inch=s_cm/2.54;
        feets=s_inch/12;
        inch=s_inch%12;
        return (feet(feets,inch));
    }
    meter(feet f_i)
    {
        int ft,ih;
        ft=f_i.givefeet();
        ih=f_i.giveinch();
        int sum_i,sum_cm;
        sum_i=ft*12+ih;
        sum_cm=sum_i*2.54;
        m=sum_cm/100;
        cm=sum_cm%100;
    }
};
int main()
{
    meter ms,md;
    feet fs,fd;
    ms.getmeter();
    fd=ms;
    fd.displayfeet();
    fs.getfeet();
    md=fs;
    md.displaymeter();
    return 0;
}
