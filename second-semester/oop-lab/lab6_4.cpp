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
    void operator ++(int)
    {
        x++;
    }
    void display()
    {
        cout<<x<<endl;
    }
};
int main()
{
  increment i;
  i.getvalue();
  cout<<"Initial value";
  i.display();
  i++;
  cout<<"final value";
  i.display();
  return 0;
}
