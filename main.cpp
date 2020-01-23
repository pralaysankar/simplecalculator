#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
class calc
{
    public:
        int x,y;
        calc()
        {
            cout<<"Enter two numbers"<<endl;
            cin>>x>>y;
        }
};
class add:public calc
{
    public:
        int sum;
        add()
        {
            sum=x+y;
            cout<<"Sum is : "<<sum<<endl;
        }
};
class subtract:public calc
{
    public:
        int diff;
        subtract()
        {
            diff=x-y;
            cout<<"Difference is : "<<diff<<endl;
        }
};
class multiply:public calc
{
    public:
        int prod;
        multiply()
        {
            prod=x*y;
            cout<<"Product is : "<<prod<<endl;
        }
};
class division:public calc
{
    public:
        float quot;
        division()
        {
            quot=x/y;
            cout<<"Quotient is : "<<quot<<endl;
        }
};
class factorial:public calc
{
    public:
        float f1=1,f2=1;
        factorial()
        {
            for(int i=x;i>0;i--)
            f1=f1*i;
            for(int j=y;j>0;j--)
            f2=f2*j;
            cout<<"Factorial of first number is : "<<f1<<endl;;
            cout<<"Factorial of second number is : "<<f2<<endl;
            }
};
class HCF_LCM:public calc
{
    public:
        HCF_LCM()
        {
            int hcf,lcm;
            hcf=__gcd(x,y);
            lcm=x*y/hcf;
            cout<<"HCF is : "<<hcf<<endl;
            cout<<"LCM is : "<<lcm<<endl;
        }
};
class root:public calc
{
    public:
        float nroot;
        root()
        {
            nroot=pow(x,1/y);
            cout<<"second number's root over first number is : "<<nroot<<endl;
}};
class power:public calc
{
    public:
        float npow;
        power()
        {
            npow=pow(x,y);
            cout<<"Second number's power over first number is : "<<npow<<endl;
}};
int main()
{
    char op;
    cout<<"Enter Operation (+,-,*,/,!,$,r,p)"<<endl;
    cin>>op;
    switch(op)
    {
        case '+':{add obj;break;}
        case '-':{subtract obj;break;}
        case '*':{multiply obj;break;}
        case '/':{division obj;break;}
        case '!':{factorial obj;break;}
        case '$':{HCF_LCM obj;break;}
        case 'r':{root obj;break;}
        case 'p':{power obj;break;}
    }
}
