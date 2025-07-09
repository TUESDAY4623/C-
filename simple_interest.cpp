
#include<iostream>
using namespace std;
int main(){
    int p;
    cout << "Enter principal amount: ";
    cin >> p;//taking input of principal amount
    float r;
    cout << "Enter rate of interest: ";
    cin >> r;//taking input of rate of interest
    float t;
    cout << "Enter time in years: ";
    cin >> t;//taking input of time in years
    float total = p*(r/100)*t;//formulae
    cout << "the total interest to pay is:"<< total << endl;
    cout << "the total amount to pay is:"<< total+p<< endl;
}
