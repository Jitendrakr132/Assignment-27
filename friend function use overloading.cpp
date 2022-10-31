#include<iostream>
using namespace std;
class complex
{
private :
    int a,b;
public:
    complex ()
    {
        cout<<"Default constructor is called "<<endl;
        a=b=0;
    }
    complex (int x,int y)
    {
        cout<<"Parameterize constructor is called "<<endl;
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"real = "<<a<<" "<<"imge = "<<b<<endl;
    }
    friend complex operator+(complex c,complex c1);

};
complex operator +(complex c ,complex c1)
{
    complex temp;
    temp.a=c.a+c1.a;
    temp.b=c.b+c1.b;
    return temp;
}
int main()
{
    complex c1(4,5);
    complex c2(7,8);
    complex c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
