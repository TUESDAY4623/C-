
// }
// #include<iostream>
// using namespace std;
// int main(){
// int x;
// cin>>x;
// int base = 1;
// int last = x % 10;
// x=x/10;
// int decimal=0;
// decimal = decimal + (last * base);
// base = base * 2;

// }

#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 1254;
//        else if(y == 9){
        string hexadecimal = "";
        int decimal = x; // x ko decimal value ke roop mein lete hain
        while(decimal > 0){
            int remainder = decimal % 16; 
            if (remainder < 10){
                hexadecimal = char(remainder + '0') + hexadecimal;
            }
            else{
                hexadecimal = char(remainder - 10 + 'A') + hexadecimal; 
            decimal = decimal / 16; // Divide by 16 for next iteration
        }
        cout << "Hexadecimal value: " << hexadecimal << endl;
}}
