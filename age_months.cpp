#include <iostream>
using namespace std;

int main(){
    cout << "Hello, programmer! Input your first name: \n";
    string first_name;
    cin >> first_name;
    cout << "Input your age: \n";
    int age;
    cin >> age;
    int age_months = age * 12;
    cout << "Welcome, " << first_name << " Your age in months is " << age_months << "! \n";

};
