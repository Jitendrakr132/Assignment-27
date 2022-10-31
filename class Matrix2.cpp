#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
public:
    void operator+(matrix);
    void accept_matrix()
    {
        cout<<"\n \n Enter the matrix :";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<" ";
                cin>>a[i][j];
            }
        }
    }
    void display_matrix()
    {
        cout<<"\n matrix :"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<"  ";
                cout<<a[i][j];
            }
            cout<<"\n";
        }
    }
    matrix()
    {

    }

};
void matrix::operator+(matrix m)
{
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            c[i][j]=a[i][j]+m.a[i][j];
        }
    }
    cout<<"\n \n Additional matrix : "<<endl;
    for(int i=0;i<3;i++)
    {
    cout<<" ";
    for(int j=0;j<3;j++)
    {
       cout<<c[i][j];
    }
    cout<<"\n";
    }
}
int main()
{
      matrix m1,m2;
      cout<<"first matrix";
      m1.accept_matrix();
      cout<<"\n \n second matrix :";
      m2.accept_matrix();
      matrix m3=m1+m2;
      m1.display_matrix();
      m3.display_matrix();

    return 0;
}
