/*Develop a program using a class to with 3x3 matrix as a data member. Overload the * operator so as multiply two matrices.*/
/*overloading matrix multiplication*/
#include<iostream>
using namespace std;
class Matrix
{
    int a[10][10];
public:
    void getmatrix()
    {
        int i,j;
        cout<<"enter "<<9<<" elements of matrix ";
        for(i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
                cin>>a[i][j];
        }
    }
    void display()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
                cout<<a[i][j]<<"\t";
            cout<<endl;
        }
    }
    Matrix operator *(Matrix m2)
    {
        int i,j,k;
        Matrix c;
        for (i=0;i<3;i++)
        {
           for (j=0;j<3;j++)
           {
               c.a[i][j]=0;
               for(k=0;k<3;k++)
               {
                   c.a[i][j]=c.a[i][j]+a[i][k]*m2.a[k][i];
               }
           }
        }
        return c;
    }
};
int main()
{
    Matrix m1,m2,mul;
    m1.getmatrix();
    m2.getmatrix();
    mul=m1*m2;
    cout<<"matrix A is "<<endl;
    m1.display();
    cout<<"matrix B is "<<endl;
    m2.display();
    cout<<"product is "<<endl;
    mul.display();
    return 0;
}
