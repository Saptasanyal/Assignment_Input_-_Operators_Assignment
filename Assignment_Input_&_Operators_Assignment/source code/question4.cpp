//C++ Assignments 2 | Week1
//question 4:
#include<iostream>
using namespace std;
int main()
{
    float radius, height; // as both of them can be fractional value
    cout<<"Enter the radius of the cylinder: ";
    cin>>radius;
    cout<<"Enter the height of the cylinder: ";
    cin>>height;
    cout<<"Volume of the cylinder with height "<<height<<" and radius "<<radius<<" is: "<<3.14*radius*radius*height; // since volume is pi*r^2*h
    return 0;
}