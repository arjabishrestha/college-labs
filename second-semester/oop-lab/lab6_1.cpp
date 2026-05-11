/*overloading unary operator postfix*/
#include<iostream>
using namespace std;
class increment
{
    int x;
public:
    void getvalue()
    {
        cout<<"enter x ";
        cin>>x;
    }
    increment operator ++(int)
    {
        increment value;
        value.x=x++;
        return value;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
int main()
{
  increment initial,finall;
  initial.getvalue();
  cout<<"Initial value";
  initial.display();
  finall=initial++;
  cout<<"final value";
  finall.display();
  return 0;
}
