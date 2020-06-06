#include<iostream>
#include<cmath>

using namespace std;

void calculate(double expo1,double expo2,double expo3);

typedef double exponents;
typedef double roots;

int main()
{
    exponents first,second,third;
    

    cout<<"Enter the first exponent:\t";
    cin>>first;

    cout<<"Enter the second exponent:\t";
    cin>>second;

    cout<<"Enter the third exponent:\t";
    cin>>third;

    double selection=pow(second,2)-(4*first*third);

    if(selection > 0)
    {
        calculate(first,second,third);
    }
    else if(selection == 0)
    {
        calculate(first,second,third);
    }
    else
    {
        cout<<"roots are imaginary";
    }
    




    return 0;
}

void calculate(double expo1,double expo2,double expo3)
{
    roots root1,root2;
    root1= ((-1*expo2)+sqrt(pow(expo2,2)-(4*expo1*expo3)))/(2*expo1);
    root2= ((-1*expo2)-sqrt(pow(expo2,2)-(4*expo1*expo3)))/(2*expo1);

   cout<<"Roots values are "<<root1<<" and "<< root2<<endl;
}