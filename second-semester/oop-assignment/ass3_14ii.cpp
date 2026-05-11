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
    Student()
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
    ~Student()
    {
        cout<<roll<<"\t"<<name<<"\t"<<age<<"\t"<<score<<"\t"<<faculty<<endl;

    }
};
int main()
{
    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;
    int i;
    {
        for (i=0;i<n;i++)
            Student s[i];
        cout<<"roll \t name \t age \t score \t faculty"<<endl;
    }

    return 0;
}

