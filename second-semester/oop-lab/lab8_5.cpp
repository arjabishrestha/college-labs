#include <iostream>
using namespace std;
class Publication {
protected:
 string title;
public:
 Publication(string t) : title(t) {}
 void print()
 {
     cout << "Title: " << title << endl;
 }
};
class Book : virtual public Publication {
 int accessionNumber;
public:
 Book(string t, int num) : Publication(t), accessionNumber(num) {}
 void print()
 {
 Publication::print();
 cout << "Accession Number: " << accessionNumber << endl;
 }
};
class Magazine : virtual public Publication {
 int volumeNumber;
public:
 Magazine(string t, int vol) : Publication(t), volumeNumber(vol) {}
 void print()  {
 Publication::print();
 cout << "Volume Number: " << volumeNumber << endl;
 }
};
class Journal : public Book, public Magazine {
public:
 Journal(string t, int num, int vol) : Book(t, num), Magazine(t, vol), Publication(t) {}
 void print()
 {
    Book::print();
    Magazine::print();
 }
};
int main()
{
 Journal j("IEEE OOP", 6813, 1);
 j.print();
 return 0;
}

