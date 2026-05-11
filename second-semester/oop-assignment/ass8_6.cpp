/*maximum and minimum member of array using template*/
#include<iostream>
using namespace std;
template<class T,int s>
class Array
{
    T a[s];
public:
    void getdata()
    {
        cout<<"enter "<<s<<" elements ";
        for(int i=0;i<s;i++)
        {
            cin>>a[i];
        }
    }
    void maxi()
    {
        int great=a[0];
        int i;
        for (i=0;i<s;i++)
        {
           if(a[i]>great)
                great=a[i];
        }
        cout<<"The maximum element is "<<great<<endl;
    }
    void mini()
    {
        int least=a[0];
        int i;
        for (i=0;i<s;i++)
        {
           if(a[i]<least)
                least=a[i];
        }
        cout<<"The minimum element is "<<least<<endl;
    }
    void display()
    {
        cout<<"The array is "<<endl;
        for(int i=0;i<s;i++)
        {
            cout<<a[i]<<"\t";
        }
        cout<<endl;
    }
    void sortarray()
    {
        for (int i=0;i<s-1;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                int temp;
                if(a[j]<a[i])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        cout<<"The sorted elements are "<<endl;
        for(int i=0;i<s;i++)
        {
            cout<<a[i]<<"\t";
        }
    }
};
int main()
{
    Array<int,5> a1;
    a1.getdata();
    a1.display();
    a1.maxi();
    a1.mini();
    a1.sortarray();
    return 0;
}
