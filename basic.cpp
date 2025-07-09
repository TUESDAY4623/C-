// // printing hello world as time you ask
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout << "enter the number of time you want to print hello world: ";
//     cin >> x;
//     int y = 0;
//     while(y < x){
//         cout << "Hello World!\n";
//         y++;
//         if (y < x){
//             continue;
//         }
//         else{
//             break;
//         }    
//     }
// }




// // getline function ki use karni hai input string kahin pehle kuch read kar ke liye
// #include<iostream>
// using namespace std;
// int main(){
//     string input; // string variable declare karna hoga
//     getline(cin, input);
// // poora line read karne ke liye getline ka istemal
//     cout << input;
// // yahan par aap input ka length ya kuch aur process kar sakte hain
// }




// // perimeter and area calculator function
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout <<"enter the lenght in meter: ";
//     cin >> x;
//     int y;
//     cout <<"enter the width in meter: ";
//     cin >> y;
//     cout<<"perimeter: " << 2*x+2*y <<" meter"<< endl;
//     cout<<"area: " << x*y <<" square_meter"<< endl;
// }




// // its a triangle or not
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout <<"enter first side: ";
//     cin >> x;
//     int y;
//     cout <<"enter second side: ";
//     cin >> y;
//     int z;
//     cout <<"enter third side: ";
//     cin >> z;
//     (z==x+y || y==x+z || x==y+z) ? cout<<"its not a tringle" : cout<<"its a tringle";
    
//     // if(z==x+y || y==x+z || x==y+z){
//     //     cout<<"its not a tringle";
//     // }    
//     // else{
//     //     cout<<"its a tringle"<< endl;
//     // }
// }




// // greatest of three numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout <<"enter the number: ";
//     cin >> x;
//     int y;
//     cout <<"enter the number: ";
//     cin >> y;
//     int z;
//     cout <<"enter the number: ";
//     cin >> z;
//     if (x>y && x>z){
//         cout<< x << " is the greatest number";
//     }
//     if (y>x && y>z){
//         cout<< y << " is the greatest number";
//     }
//     if (z>x && z>y){
//         cout<< z << " is the greatest number";
//     }
//     else{
//         cout <<"all numbers are same";
//     }
// }




// // greatest between three number nested loop
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout <<"enter the number: ";
//     cin >> x;
//     int y;
//     cout <<"enter the number: ";
//     cin >> y;
//     int z;
//     cout <<"enter the number: ";
//     cin >> z;
//     if (x>y){
//         if(x>z){
//             cout<< x << " is the greatest number";
//         }
//         else{
//             cout<< z << " is the greatest number";
//         }
//     }
//     else{
//         if(y>z){
//             cout<< y << " is the greatest number";
//         }
//         else{
//             cout<< z << " is the greatest number";
//         }
//     }
// }




// // finding the quadrant 
// #include<iostream>
// using namespace std;
// int main(){
//     float x;
//     cout <<"enter x-axis: ";
//     cin >> x;
//     float y;
//     cout <<"enter y-axis: ";
//     cin >> y;
//     if (x>0 && y>0){
//         cout<< "point lies in 1st quadrant";
//     }
//     if (x<0 && y>0){
//         cout<< "point lies in 2nd quadrant";
//     }
//     if (x<0 && y<0){
//         cout<< "point lies in 3rd quadrant";
//     }
//     else{
//         cout<< "point lies in 4th quadrant";
//     }
// }




// // calculator from switch function
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout << "Enter the first number: ";
//     cin >> x;
//     char ch;
//     cout << "Enter the operator (+, -, *, /): ";
//     cin >> ch;
//     int y;
//     cout << "Enter the second number: ";
//     cin >> y;
//     switch(ch){
//         case '+':
//         cout << x + y;
//         break;
//         case '-':
//         cout << x - y;
//         break;
//         case '*':
//         cout << x * y;
//         break;
//         case '/':
//         if(y!=0){ //if y is not equal to zero then perform the calculation
//             cout << x / y;
//             break;
//         }
//         else{ //if y is equal to zero then it doesn't perform the calculation
//             cout << "division by zero is not allowed";
//             break;
//         }
//         default: //its a default character if anything doesn't match it show this output
//         cout << "Invalid operator";
//     }
// }




// //finding even numbers between 0 to input value
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout << "Enter the number in which you want a even numbers from 0: ";
//     cin >> x;
//     for(int y=0; y<=x ; y++){
//         if(y%2==0){
//         cout << y <<endl;
//         }
//         else{
//             continue;
//         }
//     } 
// }




// // AP to make from first, common difference and n term
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout << "Enter the first term: ";
//     cin >> a;
//     int d;
//     cout << "Enter the common Difference: ";
//     cin >> d;
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     for (int i=0; i<n; i++){
//         cout << a + (i*d) <<endl;
//         if (i == n-1){
//             break;
//         }    
//     }
// }




// // making  GP
// #include<iostream>
// #include<cmath> // here is the library function math call
// using namespace std;
// int main(){
//     int a;
//     cout << "Enter the first term: ";
//     cin >> a;
//     int r;
//     cout << "Enter the common ratio: ";
//     cin >> r;
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     for(int i = 0; i<n; i++){
//         int x = pow(r,i);
//         cout << a*(x) << endl;
//     }
// }




// //print the highest factor
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the number: ";
//     cin >> n;
//     int f = 1;
//     for(int i = 1; i<n; i++){
//         if(n%i==0){
//             f = i;
//         }
//         else {
//             continue;
//         }
//     }
//     cout << "highest factor:" << f;
// }/




// //finding all the factors in decreasing order
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the number of which you want to have all factors: ";
//     cin >> n;
//     for(int i=n; i<=n; i--){
//         if (n%i==0){
//             //int f = i;
//             cout << i <<" ";    
//         }
//         else{
//             continue;
//         }   
//     }
// }




// // finding prime or not
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     cout << "Enter the number: ";
//     cin >> i;
//     bool isprime = true; 
//     for(int x=2; x<=i/2; x++){
//         if(i%x==0){
//             isprime = false;
//             break;
//         }
//         if(i<=1){
//             isprime = false;
//             break;
//         }
//         else{
//             isprime = true;
//         }
//     }
//     if(isprime == false){
//         cout << i << " is not a prime number." << endl;
//     }
//     else{
//         cout << i << " is a prime number." << endl;
//     }
// }




// //count the number of digits
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter the number: ";
//     cin >> n;
//     int i=0;
//     while(n>0){
//         n=n/10;
//         i++;
//     }
//     cout << "Number of digits: " << i;
// }




// //print the sum of digits of the number of digits
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Number of digits: ";
//     cin >> n;
//     int sum=0;
//     int digit=0;
//     while(n>0){
//         digit=n%10;
//         sum = sum + digit;
//         n=n/10;
//     }
//     cout << "Sum of digits: " << sum;
// }




// //print the product of the digits
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Number of digits: ";
//     cin >> n;
//     int product=1;
//     int digit=0;
//     while(n>0){
//         digit=n%10;
//         product = product * digit;
//         n=n/10;
//     }
//     cout << "product of digits: " << product;
// }




// //print the sum of all even digits
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Number of digits: ";
//     cin >> n;
//     int sum=0;
//     int digit=0;
//     while(n>0){
//         if(n%2==0){
//             digit=n%10;
//             sum = sum + digit;
//             n=n/10;
//         }
//         else{
//             n=n/10;
//         }
//     }
//     cout << "Sum of even digits: " << sum;
// }




// //find the reverse order of numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Number of digits: ";
//     cin >> n;
//     int r = 0;
//     while(n>0){
//         int digit=n%10;
//         r = r*10;
//         r = r + digit;
//         n=n/10;
//     }
//     cout << "reverse of digits: " << r;
// }




// //do factorial of the number
// #include<iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int factorial = 1; // Factorial ko store karne ke liye variable
//     for (int i = 1; i <= n; i++) { // 1 se n tak loop
//         factorial *= i; // Factorial ka calculation
//     }
//     cout << "Factorial of digit: " << factorial; // Sahi output
// }



// //functions and its call
// #include<iostream>
// using namespace std;
// void american(); // Add this line if not already present
// void indian(); // Add this line to declare indian function

// void american() {
//     cout << "you are American";
// }

// void indian() { // Function definition should be here
//     cout << "you are Indian"<<endl;
//     american(); //calling american function here
//     return;// by this it goes back to main program
// }

// int main(){
//     indian();//calling indian function here
//     cout<<endl;
// }




// //learning function
// #include<iostream>
// using namespace std;
// int sum(int a, int b){//int a,int b is the formal parameter
//     return a+b;
// }
// int main(){
//     int a, b;
//     cout<<"Enter the 1st number: ";
//     cin>>a;
//     cout<<"Enter the 2nd number: ";
//     cin>>b;
//     cout<<sum(a,b); //and this is the actual parameters
// }




// //using square with help of math library function
// #include <iostream>
// #include <cmath> // here is the library function math call
// using namespace std;
// int main(){
//     cout<<sqrt(16);// square root of math library function
//     cout<<cbrt(16);// cube root of math library function
//     cout<<max(4,3);// max number of arguments
//     cout<<min(4,3);// min number of arguments
//     cout<<pow(3,4);// exponential exponent
// }




// //combination from maths
// #include<iostream>
// using namespace std;
// int fac(int x){
//     int c=1;
//     for(int i=1; i<=x; i++){
//         c *= i;
//     }
//     return c;
// }
// int main(){
//     int n;
//     cout<<"Enter the n: ";
//     cin>>n;
//     int r;
//     cout<<"Enter r: ";
//     cin>>r;
//     int a=fac(n);
//     int b=fac(r);
//     int c=fac(n-r);
//     cout<<a/(b*c)<<endl;
// }




// //pascal triangle
// #include<iostream>
// using namespace std;
// int fac(int n){
//     int f = 1;
//     for(int i=1; i<=n; i++){
//         f *= i;
//     }
//     return f;
// }
// int ncr(int n, int r){
//     return fac(n)/(fac(r)*fac(n-r));
// }
// int main(){
//     int n;
//     cout<<"Enter the n: ";
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         for(int j=0; j<=n-i; j++){
//             cout<<"   ";
//         } 
//         for(int j=0; j<=i; j++){
//             cout<<ncr(i,j)<<"    ";
//         } 
//     cout<<endl;
//     }
// }




// //swap number or string
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the x: ";
//     cin>>x;
//     int y;
//     cout<<"Enter the y: ";
//     cin>>y;
//     int temp = x;
//     x=y;
//     y=temp;
//     cout<<"After swapping: "<<endl;
//     cout<<"Value of x: "<<x<<endl;
//     cout<<"Value of y: "<<y<<endl;
// }




// //swap number or string
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the x: ";
//     cin>>x;
//     int y;
//     cout<<"Enter the y: ";
//     cin>>y;
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     cout<<"After swapping: "<<endl;
//     cout<<"Value of x: "<<x<<endl;
//     cout<<"Value of y: "<<y<<endl;
// }




// // swaping using functions
// #include<iostream>
// using namespace std;
// void swap(int &a, int &b){ //function for swaping values
//     int temp = a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int x;
//     cout<<"Enter the x: ";
//     cin>>x;
//     int y;
//     cout<<"Enter the y: ";
//     cin>>y;
//     swap(x,y);
//     cout<<"After swapping: "<<endl;
//     cout<<"Value of x: "<<x<<endl;
//     cout<<"Value of y: "<<y<<endl;
// }




// //location of file in memory in machine laguage
// #include<iostream>
// using namespace std;
// int main(){
//     int x = 3;
//     int* p = &x;
//     cout<<&x<<endl;
//     cout<<&p<<endl;
//     cout<<*p<<endl;
// }




// //swaping using pointers
// #include<iostream>
// using namespace std;
// void swap(int* a, int* b){ //function for swaping values
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int x;
//     cout<<"Enter the x: ";
//     cin>>x;
//     int y;
//     cout<<"Enter the y: ";
//     cin>>y;
//     swap(&x,&y);
//     cout<<"After swapping: "<<endl;
//     cout<<"Value of x: "<<x<<endl;
//     cout<<"Value of y: "<<y<<endl;
// }




// //max function
// #include<iostream>
// using namespace std;

// int main(){
//     int x;
//     cout<<"Enter the x: ";
//     cin>>x;
//     int y;
//     cout<<"Enter the y: ";
//     cin>>y;
//     cout<<maxoftwo(x,y);
// }




// //find sum of numbers from 0 to n
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the n: ";
//     cin>>n;
//     int sum=0;

//     for(int i=0; i<=n; i++){
//         sum += i;
//     }
//     cout<<"Sum of numbers from 0 to "<<n<<" is: "<<sum<<endl;
// }



// //finding the prime number
// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"Enter the number you want to check";
//     int n;
//     cin>>n;
//     for(int i=0; i<=n){
//         if(n%i==0){
//             break;
//         }
//         if(i==n-1){
//             cout<<n<<" is a prime number";
//         }
//     }
// }




// //it is used write a number in sequence from 1 in a box of definite leght and breath
// #include <iostream>
// using namespace std;
// int main(){
//     cout<<"enter the number:";
//     int x;
//     cin>>x;
//     cout<<"enter the number:";
//     int y;
//     cin>>y;
//     int z = 1;
//     for(int i=0; i<=x; i++){
//         for(int j=0; j<=y; j++){
//             cout<<z<<" ";
//             z++;
//         }
//     cout<<endl;
//     }
// }




// //make a code to count the numebr of digits in the string
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number: "; // User se number input lene ke liye prompt
//     cin >> n; // User se input le rahe hain
//     int z = 0; // Digits count karne ke liye variable
//     int temp = n; // Temporary variable to hold the original number
//     // Loop to count the number of digits
//     while (temp > 0) {
//         temp /= 10; // Number ko 10 se divide karte hain
//         z++; // Digits count increment karte hain
//     }
//     cout << "Number of digits in " << n << " is: " << z << endl; // Result print karte hain
//     return 0;
// }




// making number conversion system
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




// //
// #include<iostream>
// using namespace std;
// int main(){
    
// }