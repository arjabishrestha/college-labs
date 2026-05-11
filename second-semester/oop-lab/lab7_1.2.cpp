/*user defined to basic*/
/*dollar to rupees*/
#include<iostream>
using namespace std;
class dollar
{
    float d;
public:
    dollar()
    {
        cout<<"enter dollar";
        cin>>d;
    }
    operator float()
    {
        float r;
        r=d*132;
        return r;
    }
};
int main()
{
    dollar cd;
    float cr;
    cr=cd;
    cout<<cr<<" rupees";
    return 0;
}
