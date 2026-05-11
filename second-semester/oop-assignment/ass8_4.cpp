/*stack using template*/
#include<iostream>
using namespace std;
template<class T,int s>
class Stack
{
    T A[s];
    int top;
public:
    Stack()
    {
        top=-1;
    }
    void push(int);
    void pop();
};
template<class T,int s>
void Stack<T,s>::push(int data)
{
    if (top==s-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
       top++;
       A[top]=data;
    }
}
template<class T,int s>
void Stack<T,s>::pop()
{
    if (top<0)
    {
        cout<<"Stack is empty "<<endl;
    }
    else
    {
        cout<<"Popped element is "<<A[top]<<endl;
        top--;
    }
}
int main()
{
    Stack<int,2> s1;
    s1.push(10);
    s1.push(12);
    s1.push(4);  //stack is full
    s1.pop();
    s1.pop();
    s1.pop();
    return 0;
}
