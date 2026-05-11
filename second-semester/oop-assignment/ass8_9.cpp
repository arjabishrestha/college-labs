/*sum and average of array elements using function template*/
#include<iostream>
using namespace std;
template<class T>
T sum(T *a,int s)
{
    int i;
    T add=0;
    for(i=0;i<s;i++)
    {
        add+=a[i];
    }
    return add;
}
template<class T>
double avg(T *a,int s)
{
    T add=sum(a,s);
    double av=(double)sum(a,s)/s;
    return av;
}
int main()
{
    int a[5]={1,5,9,3,3};
    cout<<"The sum of integer array elements is "<<sum(a,5)<<endl;
    cout<<"The average is "<<avg(a,5)<<endl;
    float b[6]={1.1,2.5,5.19,3.3,1.9,0.5};
    cout<<"The sum of float array elements is "<<sum(b,6)<<endl;
    cout<<"The average is "<<avg(b,6)<<endl;
    double c[4]={1.10,2.25,5.019,3.33};
    cout<<"The sum of integer array elements is "<<sum(c,4)<<endl;
    cout<<"The average is "<<avg(c,4)<<endl;
}
