#include<iostream>
using namespace std;

int main(){
    cout << "Enter your first name \n";
    string first_name;
    cin >> first_name;

    cout << "Enter your second name \n";
    string second_name;
    cin >> second_name;

    cout << "Your first name and second name is: \n"<< first_name << " " << second_name << "\n \n";
    cout << "****************************************** \n \n";


    if(first_name == second_name)
        cout << "The name is similar! \n";

    if(first_name < second_name)
        cout << first_name << " is alphabetically before " << second_name << "\n";

    if(first_name > second_name)
        cout << first_name << " is alphabetically after " << second_name << "\n";


// *******************************************************************************************************************************
    // cout << "Please enter two names\n"; 
    // string first;
    // string second;
    // cin >> first >> second; // read two strings
    // if (first == second)
    // cout << "that's the same name twice\n";
    // if (first < second)
    // cout << first << " is alphabetically before " << second <<'\n';
    // if (first > second)
    // cout << first << " is alphabetically after " << second <<'\n';

}