#include<iostream>
int main(){
    int a = 5, b = 7, c;
    c = a;
    a = b;
    b = c;
    std::cout << a;
    std::cout << b;
    return 0;
}