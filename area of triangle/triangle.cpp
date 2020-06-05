#include<iostream>
using namespace std;

int main()
{

    float base,height,area;

    cout<<"Enter the height of the triangle:\t";
    cin>>height;

    cout<<"Enter the base of the triangle:\t";
    cin>>base;

    area=0.5*(height*base);

    cout<<"The area of the triangle is:\t"<<area;

    
    return 0;
}