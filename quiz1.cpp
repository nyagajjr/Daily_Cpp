// [4] Write a program that prompts the user to enter two integer values. 
// Store these values in int variables named val1 and val2. 
// Write your program to determine the smaller, larger, sum, difference, product, and ratio 
// of these values and report them to the user.

#include<iostream>
using namespace std;

int main(){
    cout << "Enter two integers \n";
    int val1, val2;
    cin >> val1 >> val2;
    if(val1 > val2)
        cout << val1 << " is greater than " << val2 << "\n";
    else
        cout << val1 << " is less than " << val2 << "\n";

    int sum = val1 + val2;
    cout << "The sum is " << sum << "\n";
    int difference = val1 - val2;
    cout << "The difference is " << difference << "\n";
    int product = val1 * val2;
    cout << "The product is " << product << "\n";
    int ratio = val1/val2;
    cout << "The ratio is " << ratio << "\n";

}