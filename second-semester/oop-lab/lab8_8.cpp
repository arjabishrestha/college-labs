/*cricketer inheritance*/
#include<iostream>
using namespace std;
class cricketer
{
protected:
    string name;
    int age,num;
public:
    void getdata()
    {
        cout<<"enter name ";
        cin>>name;
        cout<<"enter age ";
        cin>>age;
        cout<<"enter number of match played ";
        cin>>num;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl
        <<"Matches played= "<<num<<endl;
    }
};
class bowler: public cricketer
{
    int wickets;
public:
    void getdata()
    {
        cricketer::getdata();
        cout<<"enter number of wickets ";
        cin>>wickets;
    }
    void display()
    {
        cricketer::display();
        cout<<"No. of wickets= "<<wickets<<endl;
    }
};
class batsman: public cricketer
{
    int runs, centuries;
public:
    void getdata()
    {
        cricketer::getdata();
        cout<<"enter number of runs ";
        cin>>runs;
        centuries=runs/100;
    }
    void display()
    {
        cricketer::display();
        cout<<"No. of runs= "<<runs<<endl;
        cout<<"No. of centuries= "<<centuries<<endl;
    }
};
int main()
{
    batsman bat;
    bowler ball;
    cout<<"Bowler"<<endl;
    ball.getdata();
    ball.display();
    cout<<"Batsman"<<endl;
    bat.getdata();
    bat.display();
    return 0;
}
