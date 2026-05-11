/*distance*/
#include<iostream>
#include<string.h>
using namespace std;
class City
{
    char CityName[20];
    float DistFromKtm;
public:
    void getcity(char n[20])
    {
        strcpy(CityName,n);
    }
    void getdist()
    {
        cout<<"Input distance from Kathmandu to "<<CityName<<" ";
        cin>>DistFromKtm;
    }
    City operator +(City c1)
    {
        City add;
        add.DistFromKtm=c1.DistFromKtm+DistFromKtm;
        return add;
    }
    City operator -(City c1)
     {
        City diff;
        diff.DistFromKtm=c1.DistFromKtm-DistFromKtm;
        if (diff.DistFromKtm<0)
            diff.DistFromKtm=diff.DistFromKtm*-1;
        return diff;
    }
    operator float()
    {
        return DistFromKtm;
    }
};
int main()
{
    City c1,c2;
    float sum,distance;
    c1.getcity("Pokhara");
    c2.getcity("Dhangadi");
    c1.getdist();
    c2.getdist();
    sum=c1+c2;
    cout<<"sum of distance is "<<sum<<endl;
    distance=c1-c2;
    cout<<"distance between cities is "<<distance;
    return 0;
}

