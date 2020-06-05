#include<iostream>
#include<cmath>

using namespace std;

int main()
{

    float area,radius;

    cout<<"Enter the radius of the circle:\t";
    cin>>radius;

    area=22.0/7*pow(radius,2);

    cout<<"The area is "<<area;

    return 0;
}