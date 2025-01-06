// using switch statement

#include<iostream>
using namespace std;

constexpr double cm_per_inch = 2.54;

int main(){
    double length = 1;
    char unit = ' ';

    cout << "Please enter a length followed by a unit (c or i): \n";

    cin >> length >> unit;

    switch(unit){
            case 'i':
                cout << length << " in == " << length * cm_per_inch << "cm\n";
                break;
        
            case 'c':
                cout << length << "cm == " << length / cm_per_inch << "cm\n";
                break;

            default:
                cout << "Sorry, I don't know a unit called " << unit << "\n";

    }
   
}