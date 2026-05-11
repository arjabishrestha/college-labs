/*constructor overloading*/
#include<iostream>
#include<math.h>
using namespace std;
class area
{
    float s1,s2,s3;
public:
    area()
    {
        cout<<"enter sides of triangle ";
        cin>>s1>>s2>>s3;
    }
    area(float x, float y, float z)
    {
        s1=x;
        s2=y;
        s3=z;
    }
    void calculate()
    {
        float s,a;
        s=(s1+s2+s3)/2;
        a=pow((s*(s-s1)*(s-s2)*(s-s3)),0.5);
        cout<<"Area of triangle is "<<a<<endl;
    }
};
int main()
{
    area t1,t2(3.0,4.0,5.0);
    t1.calculate();
    t2.calculate();
    return 0;
}
