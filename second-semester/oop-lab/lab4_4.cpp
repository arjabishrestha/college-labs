/*mountain height*/
#include<iostream>
#include<string.h>
using namespace std;
class Mountain
{
    char name[20],location[20];
    float height;
public:
    Mountain(char n[],char l[],float h)
    {
       strcpy(name,n);
       strcpy(location,l);
       height=h;
    }
    Mountain CmpHeight(Mountain m1, Mountain m2)
    {
        if (m1.height>m2.height)
            return m1;
        else
            return m2;
    }
    void DispInf()
    {
        cout<<name<<"\t"<<location<<"\t"<<height<<endl;
    }
};
int main()
{
    Mountain m1("Sagarmatha","Solukhumbu",8848.48);
    Mountain m2("Annapurna","Annapurna",6890.99);
    cout<<"Mountain 1 info"<<endl;
    m1.DispInf();
    cout<<"Mountain 2 info"<<endl;
    m2.DispInf();
    Mountain m3=m3.CmpHeight(m1,m2);
    cout<<"Greatest Mountain info"<<endl;
    m3.DispInf();
    return 0;
}
