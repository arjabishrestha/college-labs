/*Write a program to create a class Student and get values for names, age, roll and
percentage from keyboard and display the information of n students in the monitor in
the following format:
Roll Name Age Score Faculty
101 John 22 82.5 Civil
201 Amanda 23 67.5 Computer
301 Mark 21 89 Electronics
102 Roger 23 80 Architecture
202 Martha 22 77 Computer
302 Suzanne 24 92.5 Electronics*/
#include<iostream>
using namespace std;
class Student
{
    int roll,age;
    float score;
    char name[20],faculty[20];
public:
    void getinfo()
    {
        cout<<"enter roll ";
        cin>>roll;
        cout<<"enter name ";
        cin>>name;
        cout<<"enter age ";
        cin>>age;
        cout<<"enter score ";
        cin>>score;
        cout<<"enter faculty ";
        cin>>faculty;
    }
    void disinfo()
    {
        cout<<roll<<"\t"<<name<<"\t"<<age<<"\t"<<score<<"\t"<<faculty<<endl;
    }
};
int main()
{
    int n;
    cout<<"enter number of students ";
    cin>>n;
    Student s[n];
    int i;
    for (i=0;i<n;i++)
    {
        s[i].getinfo();
    }
    cout<<"roll \t name \t age \t score \t faculty"<<endl;
    for (i=0;i<n;i++)
    {
        s[i].disinfo();
    }
    return 0;
}

