// Sales = $95,000
// State tax = 4%
// County tax = 2%
#include<iostream>
using namespace std;

int main(){
    double Sales = 95000;
    double State_tax;
    double County_tax;

    State_tax = 0.04 * Sales;
    County_tax = 0.02* Sales;

    cout<<"Sales= $"<<Sales<<endl
        <<"State Tax= $"<<State_tax<<endl
        <<"County Tax= $"<<County_tax<<endl;

    double total_tax = State_tax + County_tax;

    cout<<"Total tax to be payed= $"<<total_tax<<endl;
    return 0;
}