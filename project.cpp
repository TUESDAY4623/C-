#include<iostream>
#include<chrono>
#include<thread>
#include<fstream>
using namespace std;
int main(){
    int x,phone_number, age, amount;
    char name, Address;
    cout<<"Enter 1 to Open Bank Account"<<endl;
    cout<<"Enter 2 to see account detail"<<endl;
    cout<<"Enter 3 to deposit money"<<endl;
    cout<<"Enter 4 to withdraw money"<<endl;
    cout<<"Enter 5 to exit"<<endl;
    cout<<"=>";
    cin>>x;
    if(x==1){
        cout<<"WELCOME TO XYZ BANK"<<endl;
        std::this_thread::sleep_for(std::chrono::seconds(5)); //time delay of 5sec
        // sleep(5); //time delay of 5sec
        cout<<"Please enter your name: ";
        cin>>name;
        cout<<endl;
        cout<<"please tell me your age: ";
        cin>>age;
        cout<<endl;
        cout<<"please tell me your Address: ";
        cin>>Address;
        cout<<endl;
        cout<<"please tell me your Phone number: ";
        cin>>phone_number;
        cout<<endl;
        cout<<"CONGRATULATIONS YOUR ACCOUNT IS OPEN"<<endl;
        cout<<"We request you to deposit some ammount"<<endl;
        cout<<"So how much amount you want to deposit(min. 500/-)";
        cin>>amount;
        cout<<endl;
        cout << "your amount of " << amount << " is deposited to your Bank Account Mr. " << name << endl;
        std::ofstream outFile("example.txt");

    }else if(x==2){
        
    }
}