#include<iostream>
using namespace std;

void calculate(double amount,double percentage);

int main()
{
    double billAmount;

    cout<<"Enter the bill amount:\t";
    cin>>billAmount;


    if(billAmount<100)
    {
        calculate(billAmount,0);
    }
    else if(billAmount>=100 && billAmount<500)
    {
        calculate(billAmount,10);
    }
    else
    {
        calculate(billAmount,20);
    }
    


    return 0;
}

void calculate(double amount,double percentage)
{
    double discount=amount*(percentage/100);
    double finalAmount=amount-discount;

    cout<<"Discount is\t\t"<< discount<<endl;
    cout<<"Discounted price is:\t"<<finalAmount<<endl;

}