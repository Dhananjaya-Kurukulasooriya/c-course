#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the numeber to check:\t";
    cin>>number;

    if(number%2==1)
    {
        cout<<"The numeber that you enter is Odd"<<endl;
    }
    else
    {
        cout<<"The number that you enter is Even"<<endl;
    }



    //now check whether it is positive or negative
    if(number >0 )
    {
        cout<<"The number is positive"<<endl;
    }
    else
    {
        cout<<"The number is negative"<<endl;
    }
    

    
    return 0;
}