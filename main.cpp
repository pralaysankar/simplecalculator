#include <iostream>
using namespace std;
class calc
{
    public:
        float x,y;
        calc()
        {
            cout<<"Enter two numbers"<<endl;
            cin>>x>>y;
        }
};
class add:public calc
{
    public:
        float sum;
        add()
        {
            sum=x+y;
            cout<<"Sum is : "<<sum<<endl;
        }
};
class subtract:public calc
{
    public:
        float diff;
        subtract()
        {
            diff=x-y;
            cout<<"Difference is : "<<diff<<endl;
        }
};
class multiply:public calc
{
    public:
        float prod;
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
int main()
{
    char op;
    cout<<"Enter Operation (+,-,*,/)"<<endl;
    cin>>op;
    switch(op)
    {
        case '+':{add obj;break;}
        case '-':{subtract obj;break;}
        case '*':{multiply obj;break;}
        case '/':{division obj;break;}
    }
}
