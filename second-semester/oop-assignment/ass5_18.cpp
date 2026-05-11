/*Write a program as specified below
a. Design a class Student with data member roll no and two member function to read and display
the marks.
b. Design a class Test that inherits the class student, consist its own data member to store marks
in two subject two member function to read and display the marks.
c. Design a Third class Result that inherits class Test, consists data member of its own to store
marks and member function to display roll no marks and total of two subject*/
#include<iostream>
using namespace std;
class Student
{
protected:
    int rn;
public:
    void readdata()
    {
        cout<<"enter roll number ";
        cin>>rn;
    }
    void display()
    {
        cout<<"Roll no: "<<rn<<endl;
    }
};
class Test:public Student
{
protected:
    int m1,m2;
public:
    void readdata()
    {
        Student::readdata();
        cout<<"enter marks in 2 subs ";
        cin>>m1>>m2;
    }
    void display()
    {
        cout<<"Marks in subject 1 is "<<m1<<endl;
        cout<<"Marks in subject 2 is "<<m2<<endl;
    }
};
class Result: public Test
{
    float total;
public:
    void display()
    {
        Student::display();
        Test::display();
        cout<<"Total is "<<m1+m2<<endl;
    }
};
int main()
{
    Result r1;
    r1.Test::readdata();
    r1.display();
    return 0;
}
