/*Write a program to convert Celsius scale to Fahrenheit scale.*/
#include<iostream>
using namespace std;
class Cscale
{
    float celsius;
public:
    Cscale()
    {
        celsius=0;
    }
    void getcelsius()
    {
        cout<<"enter temp in celsius ";
        cin>>celsius;
    }
    operator float()
    {
        float f;
        f=(9*celsius)/5 +32;
        return f;
    }
};
int main()
{
    Cscale tc;
    tc.getcelsius();
    float tf=tc;
    cout<<"The temperature in fahrenheit is "<<tf;
    return 0;
}
