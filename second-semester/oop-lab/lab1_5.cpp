/*functions with default arguments*/
#include<iostream>
using namespace std;
void salary(int ceo=80000, int io=40000, int sa=30000, int pr=25000)
{
    cout<<"Salary in 2023 is"<<endl;
    cout<<"ceo="<<ceo+0.9*ceo<<endl<<"information officer="<<ceo+0.1*ceo<<endl<<"system analyst="<<sa+0.12*ceo<<
    endl<<"programmer="<<pr+0.12*ceo<<endl;
}
int main()
{
    salary();
    return 0;
}

