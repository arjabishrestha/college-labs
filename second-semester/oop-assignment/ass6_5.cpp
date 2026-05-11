/*abstract class and virtual function*/
#include <iostream>
using namespace std;
class Student {
protected:
    string name;
    int rn;
public:
    Student(string n, int r)
    {
        name=n;
        rn=r;
    }
    virtual void display() = 0;
};
class Engineering : public Student {
    string faculty;
public:
    Engineering(string n, int r, string f) : Student(n, r)
    {
        faculty=f;
    }
    void display()
    {
        cout << "Engineering Student:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rn << endl;
        cout << "Faculty: " << faculty << endl;
    }
};
class Science : public Student {
private:
    string major;
public:
    Science(string n, int r, string maj) : Student(n, r)
    {
        major=maj;
    }
    void display()
    {
        cout << "Science Student:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rn << endl;
        cout << "Major: " << major << endl;
    }
};
class Medical : public Student {
private:
    string field;
public:
    Medical(string n, int r, string fld) : Student(n, r)
    {
        field=fld;
    }
    void display()
    {
        cout << "Medical Student:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rn << endl;
        cout << "Field: " << field << endl;
    }
};
int main() {
    Engineering e1("Alice", 101, "Computer Science");
    Science s1("Bob", 102, "Physics");
    Medical m1("Charlie", 103, "Surgery");
    Student* s[3];
    s[0] = &e1;
    s[1] = &s1;
    s[2] = &m1;
    // Using virtual function to display information
    for (int i = 0; i < 3; i++) {
        s[i]->display();
        cout << endl;
    }
    return 0;
}

