
/*[8] Write a program to test an integer value to determine if it is odd or even. As always, 
make sure your output is clear and complete. In other words, don’t just output yes or no. Your output should stand alone, 
like The value 4 is an even number. Hint: See the remainder (modulo) */

#include<iostream>
using namespace std;

int main(){
    cout << "Enter a number to test whether it's even or odd... \n";
    int num;
    cin >> num;
    cout << "Your number is " << num << "\n";
    if (num % 2 == 0)
        cout << num <<" is an even number \n";
    else
        cout << num <<" is an odd number \n";

}