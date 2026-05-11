/*user defined to user defined*/
/*class Kilowt to an object of Poundwt*/
#include<iostream>
using namespace std;
class Kilowt
{
    float kg;
public:
    Kilowt()
    {
        kg=0;
    }
    void getkg()
    {
        cout<<"enter weight in kg ";
        cin>>kg;
    }
    float kilogram()
    {
        return kg;
    }
    void displaykg()
    {
        cout<<kg<<" kg is equivalent to ";
    }
};
class Poundwt
{
    float pound;
public:
    Poundwt()
    {
        pound=0;
    }
    Poundwt(Kilowt k)
    {
        pound=k.kilogram()*2.20;
    }
    void displaypound()
    {
        cout<<pound<<" pounds";
    }
};
int main()
{
    Kilowt wkg;
    Poundwt wp;
    wkg.getkg();
    wp=wkg;
    wkg.displaykg();
    wp.displaypound();
    return 0;
}
