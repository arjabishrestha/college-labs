/*prime or not*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,fact=0;
    cout<<"enter a number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
            fact=fact+1;
    }
    if (fact==2)
        cout<<n<<" is prime number";
    else
        cout<<n<<" is not a prime number";
    return 0;
}
