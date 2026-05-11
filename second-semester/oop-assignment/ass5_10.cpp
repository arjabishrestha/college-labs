/*There are two classes called author and publication. The attributes of Author are name and degree. The attributes of publication are location and name. There must be class
called Book which contain the object of Author and publication. The attributes of the book are no of pages and price. Now write a program to accept all the attributes
(name of author, degree of author, name of publication, location of all publication, no of pages and price of the book using container class concept.*/
#include<iostream>
using namespace std;
class author
{
    string name;
    string degree;
public:
    void getdata()
    {
        cout<<"enter name of author ";
        cin>>name;
        cout<<"enter degree ";
        cin>>degree;
    }
    void display()
    {
        cout<<name<<"\t"<<degree<<"\t";
    }
};
class publication
{
    string location;
    string pname;
public:
    void getdata()
    {
        cout<<"enter location ";
        cin>>location;
        cout<<"enter publication name ";
        cin>>pname;
    }
    void display()
    {
        cout<<location<<"\t"<<pname<<"\t";
    }
};
class Book
{
    author a1;
    publication p1;
    int np,price;
public:
    void getdata()
    {
        a1.getdata();
        p1.getdata();
        cout<<"enter no of pages ";
        cin>>np;
        cout<<"enter price ";
        cin>>price;
    }
    void display()
    {
        a1.display();
        p1.display();
        cout<<np<<"\t"<<price<<"\t";
    }
};
int main()
{
    Book b1;
    b1.getdata();
    b1.display();
    return 0;
}
