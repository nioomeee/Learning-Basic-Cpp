#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    int elapsedTime = time(0); //elapsed time in seconds from Jan 1970

    int num = rand(); //using this function, every time we compile the program the answer will be the same 
    
    cout<<num<<endl;
    cout<<elapsedTime<<endl;
    return 0;
}