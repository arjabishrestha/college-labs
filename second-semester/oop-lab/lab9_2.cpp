/*media*/
#include<iostream>
#include<string.h>
using namespace std;
class media
{
protected:
    char title[20];
    float price;
public:
    media(char t[20],float p)
    {
        strcpy(title,t);
        price=p;
    }
    virtual void display()
    {
        cout<<"Title: "<<title<<endl<<"Price= "<<price<<endl;
    }
};
class book:public media
{
    int np;
public:
    book(char t[20],float p, int page):media(t,p)
    {
        np=page;
    }
    void display()
    {
        media::display();
        cout<<"Number of pages of the book "<<title<<"is "<<np<<endl;
    }
};
class tape: public media
{
    int time;
public:
    tape(char t[20],float p, int Time):media(t,p)
    {
        time=Time;
    }
    void display()
    {
        media::display();
        cout<<"Running time of the tape is "<<time<<endl;
    }
};
int main()
{
    book b1("My Mood",250.60,200);
    tape t1("Listen to me",555.55,248);
    media *bptr[]={&b1,&t1};
    for (int i=0;i<2;i++)
    {
        bptr[i]->display();
    }
    return 0;
}
