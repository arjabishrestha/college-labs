#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll;
    char name[20];
    int age;
    float score;
    char faculty[20];

public:
    // Constructor to initialize the student data
    Student() {
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
    // Destructor to display student details
    ~Student() {
        cout << roll << "\t" << name << "\t" << age << "\t" << score << "\t" << faculty << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    // Dynamically allocate array of Student objects
    Student* students = new Student[n];
    cout << "Roll\tName\tAge\tScore\tFaculty" << endl;
    delete[] students;
    return 0;
}
