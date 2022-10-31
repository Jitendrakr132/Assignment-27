#include<string.h>

#include<iostream>
using namespace std;
class Cstring
{
private:
    char str[20];
public:
    void get_string()
    {
        cout<<"Enter the string  : "<<endl;
        cin>>str;
    }
    void display()
    {
        cout<<str<<endl;
    }
    Cstring operator +(Cstring x)
    {
        Cstring c;
        strcpy(c.str,str);
        strcat(c.str,x.str);
        return c;
    }
    int operator ==(Cstring &t);
    };
    int Cstring ::operator ==(Cstring &t)
    {
        for(int i=0; str[i]!='\0';i++)
        {
            for(int j=0;t.str[j]!='\0';j++)
            {
                if(str[i]==t.str[j])
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
        }
    }
int main()
{
    Cstring str1,str2,str3;

    int result=0;
    str1.get_string();
    str2.get_string();

    cout<<"\n -----------------";
    cout<<"\n\n Frist string ";
    str1.display();
    cout<<"\n \n second string";
    str2.display();
    cout<<"\n ------------------";
    str3=str1+str2;
    cout<<"\n\n Concatenated  string is :  ";
    str3.display();
    result=str1=str2;
    if(result==0)
    {
        cout<<"\n \n Both string are Equal ";
    }
    else
        {
       cout<<"\n\n Both string are not equal";
            }
    return 0;
}
