#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;

int main(){
    srand(time(0));

    int num = rand() % 6 +1;

    cout<< num<< endl;
    return 0;
}