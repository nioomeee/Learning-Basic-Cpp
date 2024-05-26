// Write a program to calculate the area of a circle
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double radius;
    const double pi = 3.14;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    double area = pi * pow(radius, 2);
    cout<<"The area of the circle is: "<<area<<endl;
    return 0;
}