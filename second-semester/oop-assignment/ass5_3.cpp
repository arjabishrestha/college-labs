/*Write a program that will inherit a class whose members are increased by its member function.The derived class should override the function that increases its member in the
derive class that will add increment of the derived class data member. Create other meaningful functions that suit your requirement*/
#include<iostream>
using namespace std;
class base
{
protected:
    int base_counter;
public:
    base()
    {
        base_counter=0;
    }
    void getdata()
    {
        cout<<"enter base_counter value ";
        cin>>base_counter;
    }
    void increment()
    {
        base_counter= base_counter+1;
    }
    void display()
    {
        cout<<"base class counter is: "<<base_counter<<endl;
    }
};
class derived: public base
{
    int derived_counter;
public:
    derived()
    {
        derived_counter=0;
    }
    void getdata()
    {
       base::getdata();
       cout<<"enter derived_counter value ";
       cin>>derived_counter;
    }
    void increment()
    {
        base::increment();
        derived_counter+=1;
    }
    void display()
    {
        base::display();
        cout<<"derived class counter is: "<<derived_counter<<endl;
    }
};
int main()
{
    derived d1;
    d1.getdata();
    d1.increment();
    d1.display();
    return 0;
}
