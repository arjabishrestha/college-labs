/*concept of namespace*/
#include<iostream>
using namespace std;
namespace first
{
    int x=5,y=25;
}
namespace second
{
    int x=33,y=11;
    int sum=x+y;
}
int main()
{
    using namespace first;
    cout<<y/x<<endl;
    using second::sum;
    cout<<sum;
    return 0;
}
