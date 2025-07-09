#include <iostream>
using namespace std;
int main(){
    cout <<"for airindia enter{A}"<<endl;
    cout <<"for emirates enter{E}"<<endl;
    char x;
    cout << "enter the name of the airline"<<endl;
    cin >> x;
    cin.ignore();
    cout << "enter the weight of the luggage in kgs"<<endl;
    int y;
    cin >> y;
    if (x == 'A'){
        int Ai_weight_limit = 30;
        if (y <=Ai_weight_limit){
            cout << "luggage can be safely carried to plane" <<endl; // yee limit wala hai
        }
        else{
            cout << "luggage weight exceeds airindia's limit"<<endl; //yee limit se upar wala hai
            cout << "do you want to pay extra charge to carry the luggage?{y/n}"<<endl; //ye extra charge wala hai 
            char z;
            cin >> z;
            if (z == 'y'){ //yee extra charge dene wala hai 
                if (y <= Ai_weight_limit+2){ //yee 2kilo se neeche wala hai
                    int a = y - Ai_weight_limit ;
                    int b = a*300;
                    cout << "extra amount to to be paid is " << b <<endl;
                }
                if (y > Ai_weight_limit+2){ //yee 2kilo se upar wala hai
                    int c = y - Ai_weight_limit;
                    int d = c*500;
                    cout << "extra amount to to be paid is " << d <<endl;
                }
            }
            else{
                cout << "luggage cannot be carried"<<endl; //yee luggage nahi leja paye wala hai
            }
        }
    }

    if (x ==  'E'){
        int Em_weight_limit = 32;
        if (y <= Em_weight_limit){
            cout << "luggage can be safely carried to plane" <<endl;
        }
        else{
            cout << "luggage weight exceeds emirates' limit"<<endl;
            cout << "do you want to pay extra charge to carry the luggage?{y/n}"<<endl; //ye extra charge wala hai 
            char z;
            cin >> z;
            if (z == 'y'){ //yee extra charge dene wala hai
                if (y <= Em_weight_limit+2){ //yee 2kilo se neeche wala hai
                    int a = y - Em_weight_limit;
                    int b = a*300;
                    cout << "extra amount to to be paid is " << b <<endl;
                }
                if (y > Em_weight_limit+2){ //yee 2kilo se upar wala hai
                    int c = y - Em_weight_limit;
                    int d = c*500;
                    cout << "extra amount to to be paid is " << d <<endl;
                }
            }
            else{
                cout << "luggage cannot be carried"<<endl; //yee luggage nahi leja paye wala hai
            }
        }
    }    

    // New code to calculate a & b
    int a = 0xBee; // hexadecimal value
    int b = 0123456; // octal value (0o123456 ko C++ mein 0123456 likhte hain)
    cout << "Result of a & b is: " << (a & b) << endl;
}