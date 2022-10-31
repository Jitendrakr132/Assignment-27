#include<iostream>
using namespace std;
class fraction
{
    long num;
    long deno;
public:
    fraction(long n=0,long d=0)
    {
        num=n;
        deno=d;
    }
    friend void operator>>(istream &in,fraction &f)
    {
        cout<<"Enter the Numerator :"<<endl;
        in>>f.num;
        cout<<"Enter the Denominator : "<<endl;
        in>>f.deno;
    }
    friend void operator <<(ostream &out,fraction &f)
    {
        cout<<f.num<<"/"<<f.deno<<endl;
    }
    fraction operator ++()
    {
        ++num;
        ++deno;
        return (*this);
    }
    fraction operator ++(int s)
    {
        fraction temp=*this;
        num++;
        deno++;
        return temp;
    }
};
int main()
{
    fraction f1,f2;
    cout<<"\n f1  :";
    cout<<f1;
    cout<<"\n f2  :";
    cout<<f2;
    cout<<"\n \n Enter 1st fraction value ";
    cin>>f1;
    cout<<"\n f1++ :";
     f1++;
     cout<<f1;
     cout<<"\n \n Enter 2nd fraction value \n";
     cin>>f2;
     f2=++f1;
     cout<<"\n f2 =++ f1";
     cout<<f2;
     f2=f1++;
     cout<<"\n\n f2 =f1++";
     cout<<"\n f1 :";
     cout<<f1;
     cout<<"\n f2 :";
     cout<<f2;
     return 0;
}
