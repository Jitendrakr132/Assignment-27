#include<iostream>
using namespace std;
class number
{
private:
    int x,y,z;
public:
    number()
    {

    }
    number(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    number operator -()
    {
        number temp;
        temp.x=-x;
        temp.y=-y;
        temp.z=-z;
        return temp;
    }
    void display()
    {
        cout<<"x = "<<x<<"\n"<<"y = "<<y<<"\n"<<"z = "<<z<<endl;
    }
};
int main()
{
    number n(3,4,6),n1;
    n1=-n;
    n1.display();
    return 0;
}
