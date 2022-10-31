#include<iostream>
using namespace std;
class complex
{
private:
    int a;
    int b;
public:
    complex()
    {
        cout<<"default constructor is called"<<endl;
        a=b=0;
    }
    complex(int x,int y)
    {
        cout<<"parameteraze constructor is called "<<endl;
        a=x;
        b=y;
    }
    void setvalue(int x,int y)
    {
        cout<<"parameterize constructor is called"<<endl;
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    friend complex operator+(complex c1,complex c);
    complex operator-(complex &c)
    {
        complex temp;
        temp.a=a-c.a;
        temp.b=b-c.b;
        return temp;
    }
    friend complex operator *(complex c1,complex c);
    bool complex operator =(complex c)
    {
       if(a==c.a&&b==c.b)
            cout<<"complex numbers is equal"<<endl;
       else
        cout<<"Complex numbers is not equal"<<endl;
    }

~complex()
{

}
};
complex operator +(complex c1,complex c)
{
    complex temp;
    temp.a=c1.a+c.a;
    temp.b=c1.b+c.b;
    return temp;
}
complex operator *(complex c1,complex c)
{
    complex temp;
    temp.a=c1.a*c.a;
    temp.b=c1.b*c.b;
    return temp;
}
int main()
{
    complex c1(4,5);
    complex c2(5,6);
    complex c3=c1+c2;
    complex c4=c3-c2;
    complex c5=c1*c4;

    c3.display();
    c4.display();
    c5.display();
    return 0;


}
