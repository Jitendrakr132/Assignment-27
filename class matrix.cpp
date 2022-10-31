#include<iostream>
using namespace std;
class matrix
{
    int a[3][3];
public:
    void input();
    void display();
    void operator-();
};
    void matrix::input()
    {
        cout<<"\n Enter matrix element (3*3) :\n\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<" ";
                cin>>a[i][j];
            }
        }
    }
    void matrix::display()
    {
        cout<<"\n matrix is : \n\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<" ";
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    void matrix ::operator-()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                a[i][j]=-a[i][j];
            }
        }
    }
    int main()
    {
        matrix m;
        m.input();
        m.display();
        -m;
        m.display();
        return 0;
    }

