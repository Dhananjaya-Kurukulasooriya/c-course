#include<iostream>

using namespace std;
typedef int numbers;

int main()
{
    numbers num1=12,num2=15,num3=3;

    if(num1>num2 && num1>num3)
    {
        cout<<num1<<" is the maximum number";
    }
    else if (num2>num3)
    {
        cout<<num2<<" is the maximum number";
    }
    else
    {
        cout<<num3<<" is the maximum number";
    }
    
    
    
    
    return 0;
}