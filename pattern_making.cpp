// // pattern making
// #include<iostream>
// using namespace std;
// int main(){
//     int l;
//     cout<<"Enter the lenght: ";
//     cin>>l;
//     int b;
//     cout<<"Enter the breath: ";
//     cin>>b;
//     for (int i=0; i<l; i++){
//         for(int j=0; j<b; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }




// //number square
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number: ";
//     cin>>x;
//     int y;
//     cout<<"Enter the second number: ";
//     cin>>y;
//     for (int i=1; i<=x; i++){
//         for(int j=1; j<=y; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }




// //alphabet square
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number: ";
//     cin>>x;
//     int y;
//     cout<<"Enter the second number: ";
//     cin>>y;
//     for (int i=1; i<=x; i++){
//         for(int j=1; j<=y; j++){
//             cout<<static_cast<char>(j+64)<<" ";
//         }
//         cout<<endl;
//     }
// }




// //small alphabet square
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"Enter the number: ";
//     cin>>x;
//     int y;
//     cout<<"Enter the second number: ";
//     cin>>y;
//     for (int i=1; i<=x; i++){
//         for(int j=1; j<=y; j++){
//             cout<<static_cast<char>(j+96)<<" ";
//         }
//         cout<<endl;
//     }
// }




// //triangle star
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }




// //triangle number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }




// //triangle alphabet
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=i; j++){
//             cout<<static_cast<char>(j+64);
//         }
//         cout<<endl;
//     }
// }




// //triangle small alphabet
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=i; j++){
//             cout<<static_cast<char>(j+96);
//         }
//         cout<<endl;
//     }
// }




// //triangle small alphabet and number mix
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=i;j++){
//             if(i%2==0){
//                 cout<<j;
//             }
//             else{
//             cout<<static_cast<char>(j+96);
//             }
//         }
//         cout<<endl;
//     }
// }




// //flipped triangle star
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=n+1-i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }




// //odd number triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             int x=j*2-1;
//             cout<<x<<" ";
//         }
//         cout<<endl;
//     }
// }




// //flipped odd number triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n+1-i; j++){
//             int x=j*2-1;
//             cout<<x<<" ";
//         }
//         cout<<endl;
//     }
// }




// //number triangle with continuous adding
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int a=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<a<<" ";
//             a++;
//         }
//         cout<<endl;
//     }
// }




// //flipped number triangle with continuous adding
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int a=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n+1-i; j++){
//             cout<<a<<"   ";
//             a++;
//         }
//         cout<<endl;
//     }
// }




// //pattern of 1
// //           0 1
// //           1 0 1 .........
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             if((i+j)%2==0){
//                 cout<<"1 ";
//             }
//             else{
//                 cout<<"0 ";
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }




// //star triangle vertically flipped
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }




// //making a hollow shape with *
// #include<iostream>
// using namespace std;
// int main() {
//     int length, breadth;
//     cout << "Enter the length: ";
//     cin >> length;
//     cout << "Enter the breadth: ";
//     cin >> breadth;
//     for (int i = 0; i < length; i++) {  // Rows ke liye loop
//         for (int j = 0; j < breadth; j++) {  // Columns ke liye loop
//             // First row, last row, first column, ya last column par star print karna
//             if (i == 0 || i == length - 1 || j == 0 || j == breadth - 1) {
//                 cout << "* ";
//             } else {
//                 cout << "  ";  // Hollow space
//             }
//         }
//         cout << endl;  // New line ke liye
//     }
// }




// //star triangle vertically flipped
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }



//number triangle vertically flipped
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=0; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }




// //making pyramid of stars
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for(int j=1; j<=2*i-1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // printing number in pattern of 12345 23451 34512 45123 51234
// #include <iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"enter the row number: ";
//     cin>>x;
//     for (int i=1; i<=x; i++){
//         for (int j=i; j<=x; j++){
//             cout<<j;
//         }
//         for(int j=1; j<=(i-1); j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }



// //print a outline of number and inside its hollow
// #include<iostream>
// using namespace std;
// int main(){
//     int y;
//     cout<<"enter the number of the rows";
//     cin>>y;
//     int x = y+1;
//     for(int i=1; i<x; i++){
//         for(int j=1; j<x; j++){
//             if(i==1 || i==(x-1) || j==(x-1) || j==1){
//                 cout<<j<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }




// // print 1,2 in alternative way
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows";
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if((i+j)%2!=0){
//                 cout<<"2";
//             }
//             else{
//                 cout<<"1";
//             }
//         }
//         cout<<endl;
//     }
// }




// //
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n; 
//     for (int i = 1; i <= n; i++) { // Rows ke liye loop
//         for (int j = 1; j <= n - i; j++) { // Spaces print karne ke liye
//             cout << "  "; // Har row ke liye spaces
//         }
//         for (int j = 1; j <= 2 * i - 1; j++) { // Pyramid ke liye numbers print karne ke liye
//             if (j == 1 || j == 2 * i - 1 || i == n) { // Outer side ya last row
//                 cout << " " << i; // Outer side numbers print karna
//             } else {
//                 cout << "  "; // Inner space khali rakhna
//             }
//         }
//         cout << endl; // New line ke liye
//     }
// }



// //making a pattern of inversing pyramid my iterchanging space with some input
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i=1; i<=n;i++)
//     {
//         for(int j=1; j<n+1-i; j++)
//         {
//             cout<<"1 ";
//         }
//         for(int j=1; j<i; j++)
//         {
//             cout<<"    ";
//         }
//         for(int k=1; k<=n-i; k++){
//             cout<<"1 ";
//         }
//         cout<<endl;
//     }
// }
