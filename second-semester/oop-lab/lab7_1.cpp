/*basic to user defined*/
/*tola to gram*/
#include<iostream>
using namespace std;
class gram
{
    float g;
public:
    gram()
    {
    }
    gram(float t)
    {
       g= t*11.66;
    }
    void display()
    {
        cout<<g<<" grams"<<endl;
    }
};
int main()
{
    float wtola;
    gram wgram;
    cout<<"enter weight in tola ";
    cin>>wtola;
    wgram=wtola;
    wgram.display();
    return 0;
}
