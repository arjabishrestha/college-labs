/*Create classes Book having data members name of author (string), price (float) and class Stock having data member number of book (int) and category (string). Create another
class Library which derives from both the classes Book and Stock. All the classes should have functions having same name. Now write a program to illustrate this scenario.*/
#include<iostream>
using namespace std;
class Book
{
protected:
    string name;
    float price;
public:
    void getdata()
    {
        cout<<"enter name of the book";
        cin>>name;
        cout<<"enter price of the book";
        cin>>price;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;
    }
};
class Stock
{
protected:
    int num;
    string category;
public:
    void getdata()
    {
        cout<<"enter number of book ";
        cin>>num;
        cout<<"enter category of the book";
        cin>>category;
    }
    void display()
    {
        cout<<"Number: "<<num<<endl<<"Category: "<<category<<endl;
    }
};
class Library: public Book, public Stock
{
public:
    void getdata()
    {
        Book::getdata();
        Stock::getdata();
    }
    void display()
    {
        Book::display();
        Stock::display();
    }
};
int main()
{
    Library l;
    l.getdata();
    l.display();
    return 0;
}
