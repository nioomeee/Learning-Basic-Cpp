// write a program to convert farenheit to celcius
#include<iostream>
using namespace std;

int main(){
    double fahrenheit;
    cout<<"Enter the temperature in Fahrenheit: ";
    cin>>fahrenheit;
    double celcius;
    celcius = (fahrenheit - 32)*5/9;

    cout<<fahrenheit<<" in celcius is "<<celcius<<endl;
    return 0;

}