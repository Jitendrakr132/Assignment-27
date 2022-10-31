#include<iostream>
using namespace std;
class Time
{
private:
    int hours,minutes,second;
public:
    Time()
    {
        hours=minutes=second=0;
    }
    friend int operator >>(istream &cin,Time &t)
    {
        cout<<"\n Enter Hours :";
        cin>>t.hours;
        cout<<"\n Enter minutes :";
        cin>>t.minutes;
        cout<<"\n Enter Second :";
        cin>>t.second;
        t.minutes=t.minutes+t.second/60;
        t.second %=60;
        t.hours=t.hours+t.minutes/60;
        t.minutes%=60;
        if(t.hours>=25)
            return 1;
        else
            return 0;
            }
            friend void operator<<(ostream &cout,Time &k)
            {
                cout<<"\n Hours : "<<k.hours;
                cout<<"\n minutes : "<<k.minutes;
                cout<<"\n Second : "<<k.second;
            }
            int operator ==(Time t1)
            {
                int tot=hours*3600+minutes*60+second;
                int tot1=t1.hours*3600+t1.minutes*60+t1.second;
                if(tot==tot1)
                    return 1;
                else
                    return 0;
            }
            ~Time()
            {

            }
};
int main()
{
    Time t,t1;
    cout<<"Enter first Time ";
    cout<<"\n ---------------";
    if(cin>>t)
    {
        cout<<"\n Invalid Time ";
        return 0;
    }
    cout<<"\n First Time ";
    cout<<t;
    cout<<"\n \n Enter Second Time";
    cout<<"\n -----------------";
    if(cin>>t1)
    {
        cout<<"\n Invalid Time ";
        return 0;
    }
    cout<<"\n Second Time ";
    cout<<t1;
    if(t==t1)
      cout<<"\n \n Time are Same";
      else
        cout<<"\n\n Time are Different ";
      return 0;
}
