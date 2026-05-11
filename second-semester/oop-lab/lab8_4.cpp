/*course*/
#include<iostream>
using namespace std;
class Course
{
protected:
    int cid;
public:
    void getdata()
    {
        cout<<"enter course id ";
        cin>>cid;
    }
    void display()
    {
        cout<<"course id: "<<cid<<endl;
    }

};
class Mathematics:public Course
{
protected:
    int hour;
public:
    void getdata()
    {
        Course::getdata();
        cout<<"Enter teaching hours ";
        cin>>hour;
    }
    void display()
    {
        Course::display();
        cout<<"Teaching hours: "<<hour<<endl;
    }
};
class Science: public Course
{
protected:
    int labs;
public:
    void getdata()
    {
        Course::getdata();
        cout<<"No. of labs ";
        cin>>labs;
    }
    void display()
    {
        Course::display();
        cout<<"No. of labs: "<<labs<<endl;
    }
};
class Engineering: public Course
{
protected:
   int subs;
public:
    void getdata()
    {
        Course::getdata();
        cout<<"No. of subjects: ";
        cin>>subs;
    }
    void display()
    {
        Course::display();
        cout<<"No. of subjects: "<<subs<<endl;
    }
};
class Physics: public Science
{
    char topic[10];
public:
    void getdata()
    {
        Science::getdata();
        cout<<"enter difficult topic ";
        cin>>topic;
    }
    void display()
    {
        Science::display();
        cout<<"Difficult topic: "<<topic<<endl;
    }
};
class Chemistry: public Science
{
    char hod[10];
public:
    void getdata()
    {
        Science::getdata();
        cout<<"enter hod name ";
        cin>>hod;
    }
    void display()
    {
        Science::display();
        cout<<"hod: "<<hod<<endl;
    }
};
int main()
{
    Mathematics m1;
    Physics p1;
    Chemistry c1;
    Engineering e1;
    cout<<"Mathematics "<<endl;
    m1.getdata();
    m1.display();
    cout<<"Physics "<<endl;
    p1.getdata();
    p1.display();
    cout<<"Chemistry "<<endl;
    c1.getdata();
    c1.display();
    cout<<"Engineering "<<endl;
    e1.getdata();
    e1.display();
    return 0;
}
