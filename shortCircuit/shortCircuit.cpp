#include<iostream>
using namespace std;

int main()
{
    int a=5,b=7,i=5;

    if(a>b && ++i>a)
    {
        cout<<"short circuit AND";
    }
    cout<<i<<endl;

    if(a<b || ++i>a)
    {
        cout<<"short circuit OR"<<endl;
    }
    cout<<i<<endl;

    return 0;
}