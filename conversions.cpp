#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    cout<<"from binary to octal(1)"<<endl;
    cout<<"from binary to decimal(2)"<<endl;
    cout<<"from binary to hexadecimal(3)"<<endl;
    cout<<"from octal to binary(4)"<<endl;
    cout<<"from octal to hexadecimal(5)"<<endl;
    cout<<"from octal to decimal(6)"<<endl;
    cout<<"from decimal to octal(7)"<<endl;
    cout<<"from decimal to binary(8)"<<endl;
    cout<<"from decimal to hexadecimal(9)"<<endl;
    cout<<"from hexadecimal to octal(10)"<<endl;
    cout<<"from hexadecimal to binary(11)"<<endl;
    cout<<"from hexadecimal to decimal(12)"<<endl;
    cout<<"Enter the conversion number: ";
    int y;
    cin>>y;
//from binary to octal
    if(y == 1){
    int x;
    cout<<"Enter the binary number: ";
    cin>>x;
        int decimal = 0;
        int base = 1;  
        int octal = 0;  
        while(x>0){
            int last = x % 10;
            decimal = decimal + (last * base);
            x = x / 10; 
            base = base * 2;
        }
        cout<<"Decimal value: "<< decimal<< endl;
        while(decimal>0){
            int last = decimal % 8;
            decimal = decimal / 10;
            octal = octal * 10 + last;

        }
        int reversedOctal = 0;
        while(octal > 0){
            int last = octal % 10;
            reversedOctal = reversedOctal * octal * 10 + last;
            octal = octal / 10;
        }
        cout<<"octal value: "<< reversedOctal <<endl;
    }   


//from binary to decimal
    else if(y == 2){
    int x;
    cout<<"Enter the binary number: ";
    cin>>x;
        int decimal = 0;
        int base = 1;    
            while(x>0){
            int last = x % 10;
            decimal = decimal + (last * base);
            x = x / 10; 
            base = base * 2;
            
        }
        cout<<"Decimal value: "<< decimal;

    }


//from binary to hexadecimal
    else if(y == 3){
    int x;
    cout<<"Enter the binary number: ";
    cin>>x;
        int decimal = 0;
        int base = 1;  
        int hexadecimal = 0;  
        while(x>0){
            int last = x % 10;
            decimal = decimal + (last * base);
            x = x / 10; 
            base = base * 2;
        }
        cout<<"Decimal value: "<< decimal<< endl;
        while(decimal>0){
            int last = decimal % 8;
            decimal = decimal / 10;
            hexadecimal = hexadecimal * 10 + last;

        }
        int reversedhexadecimal = 0;
        while(hexadecimal > 0){
            int last = hexadecimal % 10;
            reversedhexadecimal = reversedhexadecimal * hexadecimal * 10 + last;
            hexadecimal = hexadecimal / 10;
        }
        cout<<"Hexadecimal value: "<< reversedhexadecimal <<endl;
    }


//from octal to binary
    else if(y == 4){
    int x;
    cout<<"Enter the octal number: ";
    cin>>x;
        string binary = "";
        while(x>0){
            int digit = x % 10;
            x = x / 10;
            switch(digit){
                case 0:binary = "000" + binary; break;
                case 1:binary = "001" + binary; break;
                case 2:binary = "010" + binary; break;
                case 3:binary = "011" + binary; break;
                case 4:binary = "100" + binary; break;
                case 5:binary = "101" + binary; break;
                case 6:binary = "110" + binary; break;
                case 7:binary = "111" + binary; break;
                default: cout<<"invalid input"<<endl;
            }
        }
    cout<<"Binary value:"<<binary<<endl;
    }


//from octal to hexadecimal
    else if(y == 5){
        int x;
        cout<<"Enter the octal number: ";
        cin>>x;
        int decimal = 0;
        int base = 1;
        string hexadecimal = ""; // Initialize hexadecimal string

        // Convert octal to decimal
        while(x > 0){
            int last = x % 10;
            x = x / 10;
            decimal = decimal + (last * base);
            base = base * 8;
        }
        cout << "Decimal value: " << decimal << endl;

        // Convert decimal to hexadecimal
        while(decimal > 0){
            int remainder = decimal % 16; // Get remainder for hexadecimal
            if (remainder < 10) {
                hexadecimal = char(remainder + '0') + hexadecimal; // Convert to character
            } else {
                switch(remainder){
                    case 10: hexadecimal = "A" + hexadecimal; break;
                    case 11: hexadecimal = "B" + hexadecimal; break;
                    case 12: hexadecimal = "C" + hexadecimal; break;
                    case 13: hexadecimal = "D" + hexadecimal; break;
                    case 14: hexadecimal = "E" + hexadecimal; break;
                    case 15: hexadecimal = "F" + hexadecimal; break;
                }
            }
            decimal = decimal / 16; // Divide by 16 for next iteration
        }

        cout << "Hexadecimal value: " << hexadecimal << endl; // Print hexadecimal value
    }


    //octal to decimal
    else if(y == 6){
        int x;
        cout<<"Enter the octal number: ";
        cin>>x;
            int decimal = 0;
            int base = 1;
            while(x>0){
                int last = x % 10;
                x = x / 10;
                decimal = decimal + (last*base);
                base = base * 8;
            }
            cout<<"Decimal value:"<<decimal<<endl;
        }


//from decimal to octal
    else if(y == 7){
        int x;
        cout<<"Enter the decimal number: ";
        cin>>x;
        int octal = 0;
        int base = 1;
        while(x>0){
            int last = x % 10;
            x = x / 10;
            octal = octal + (last * base);
            base = base * 8;
        }
    int reversedOctal = 0;
        while(octal > 0){
            int last = octal % 10;
            reversedOctal = reversedOctal * octal * 10 + last;
            octal = octal / 10;
        }
    cout<<"Octal value"<<reversedOctal<<endl;
    }


//decimal to binary
    else if(y == 8){
        int x;
        cout<<"Enter the decimal number: ";
        cin>>x;
        string binary;
        while(x>0){
            int last = x % 10;
            x = x / 10;
            switch(last){
                case 0:binary = "0000" + binary; break;
                case 1:binary = "0001" + binary; break;
                case 2:binary = "0010" + binary; break;
                case 3:binary = "0011" + binary; break;
                case 4:binary = "0100" + binary; break;
                case 5:binary = "0101" + binary; break;
                case 6:binary = "0110" + binary; break;
                case 7:binary = "0111" + binary; break;
                case 8:binary = "1000" + binary; break;
                case 9:binary = "1001" + binary; break;
                default: cout<<"invalid input"<<endl;
            }
        }
    cout<<"Binary value: "<<binary<<endl;
    }


//decimal to hexadecimal
    else if(y == 9){
        int x;
        cout<<"Enter the decimal number: ";
        cin>>x;
        string hexadecimal = "";
        while(x > 0){
            int remainder = x % 16;
            if (remainder < 10){
                hexadecimal = char(remainder + '0') + hexadecimal; 
            }
            else{
                switch(remainder){
                case 10: hexadecimal = "A" + hexadecimal; break;
                case 11: hexadecimal = "B" + hexadecimal; break;
                case 12: hexadecimal = "C" + hexadecimal; break;
                case 13: hexadecimal = "D" + hexadecimal; break;
                case 14: hexadecimal = "E" + hexadecimal; break;
                case 15: hexadecimal = "F" + hexadecimal; break;
                }
            }
            x = x / 16;
        }
        cout << "Hexadecimal value: " << hexadecimal << endl; 
    }
//hexadecimal to octal
    else if(y == 10){
        string x;
        cout<<"Enter the hexadecimal number: ";
        cin>>x;
        int decimal = 0;
        for (int i = 0; i < x.length(); i++) {
            char digit = x[x.length() - 1 - i];
            int value;
            if (digit >= '0' && digit <= '9') {
                value = digit - '0';
            } else {
                value = digit - 'A' + 10;
            }
            decimal += value * pow(16, i);
        }
        cout << "Decimal value: " << decimal << endl;

        // Convert decimal to octal
        string octal = "";
        while(decimal > 0) {
            int remainder = decimal % 8;
            octal = char(remainder + '0') + octal;
            decimal /= 8;
        }
        cout << "Octal value: " << octal << endl;
    }
    else if(y == 11){
        string x;
        cout<<"Enter the hexadecimal number: ";
        cin>>x;
        string binary = "";
        int decimal = 0;
        for (int i = 0; i < x.length(); i++) {
            char digit = x[x.length() - 1 - i];
            int value;
            if (digit >= '0' && digit <= '9') {
                value = digit - '0';
            } else {
                value = digit - 'A' + 10;
            }
            decimal += value * pow(16, i);
        }
        cout << "Decimal value: " << decimal << endl;
        while(decimal>0){
            int last = decimal % 10;
            decimal = decimal / 10;
            switch(last){
                case 0:binary = "0000" + binary; break;
                case 1:binary = "0001" + binary; break;
                case 2:binary = "0010" + binary; break;
                case 3:binary = "0011" + binary; break;
                case 4:binary = "0100" + binary; break;
                case 5:binary = "0101" + binary; break;
                case 6:binary = "0110" + binary; break;
                case 7:binary = "0111" + binary; break;
                case 8:binary = "1000" + binary; break;
                case 9:binary = "1001" + binary; break;
                default: cout<<"invalid input"<<endl;
            }
        }
    cout<<"Binary value: "<<binary<<endl;
    }
    else if(y == 12){
        string x;
        cout<<"Enter the hexadecimal number: ";
        cin>>x;
        int decimal = 0;
        for (int i = 0; i < x.length(); i++) {
            char digit = x[x.length() - 1 - i];
            int value;
            if (digit >= '0' && digit <= '9') {
                value = digit - '0';
            } else {
                value = digit - 'A' + 10;
            }
            decimal += value * pow(16, i);
        }
        cout << "Decimal value: " << decimal << endl;
    }
    else{
        cout<<"error in input conversion";
    }
}