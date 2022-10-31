#include<iostream>
using namespace std;
class unary
{
private:
    int a;
public:
    unary()
    {
        cout<<"Default constructor is called "<<endl;
        a=0;
    }
    unary (int x)
    {
        cout<<"parameterize constructor is called"<<endl;
        a=x;
    }
    void setvalue(int x)
{
    a=x;
}
void display()
{
    cout<<endl<<"a= "<<a<<endl;
}
unary operator -()
{
    cout<<"Unary operator overloading "<<endl;
    unary temp;
    temp.a=-a;
    return temp;
}
    unary operator ++()
    {
        cout<<"preicreament overloading "<<endl;
        unary temp;
        temp.a=++a;
        return temp;
    }
    unary operator ++(int )
    {
        cout<<"postincreament overloading "<<endl;
        unary temp;
        temp.a=a++;
        return temp;
    }

};
int main()
{
    unary u1(6);
    unary u2=-u1;
    u2.display();
    unary u3;
    u3=++u2;
     u3.display();
     unary u4;
     u4=u3++;
     u4.display();

    return 0;
}
