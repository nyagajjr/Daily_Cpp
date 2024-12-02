// #include <iostream>
// using namespace std;

// int main(){
//     cout << "Hello, programmer! Input your first name: \n";
//     string first_name;
//     cin >> first_name;
//     cout << "Input your age: \n";
//     double age;
//     cin >> age;
//     int age_months = age * 12;
//     cout << "Welcome, " << first_name << " Your age in months is " << age_months << "! \n";

// };


#include<iostream>
using namespace std;

int main(){
    int64_t age;
    cin >> age;
    
    string name;
    cin >> name;
    
    int64_t a2 = age - 1;
    string n2 = name + " Jr.";
    cout << a2 << " " << n2 ;
}
