/*constructor*/
#include<iostream>
using namespace std;
class person
{
private:
    char name[20],address[20];
    int age,ctzno;
public:
    person()
    {
        cout<<"enter name ";
        cin>>name;
        cout<<"enter address ";
        cin>>address;
        cout<<"enter age ";
        cin>>age;
        if (age>16)
        {
            cout<<"enter citizenship number ";
            cin>>ctzno;
        }
        else
            ctzno=0;
    }
    void display()
    {
        cout<<endl<<name<<"\t"<<address<<"\t"<<age<<"\t"<<ctzno;
    }
};
int main()
{
    person p1;
    p1.display();
}

