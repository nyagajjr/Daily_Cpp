// [1]Write a program that produces a simple form letter based on user input. 
// Begin by typing the code from §2.1 prompting a user to enter 
// his or her first name and writing “Hello, first_name” where first_name is the name entered by the user. 
// Then modify your code as follows: change the prompt to “Enter the name of the person you want to write to” 
// and change the output to “Dear first_name,”. Don’t forget the comma.

// [2] Add an introductory line or two, like “How are you? I am fine. 
// I miss you.” Be sure to indent the first line. Add a few more lines of your choosing – it’s your letter.

// [3] Now prompt the user for the name of another friend and store it in friend_name. 
// Add a line to your letter: “Have you seen friend_name lately?”

// [4] Prompt the user to enter the age of the recipient and assign it to an int variable age. 
// Have your program write “I hear you just had a birthday and you are age years old.” If age is 0 or less or 110 or more, 
// call simple_error("you’re kidding!") using simple_error() from PPP_support.

#include<iostream>
using namespace std;


int main(){
    // [1]
    cout << "Enter the name of the person you want to write to: \n";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ", \n";
    // [2]
    cout << "How are you? I am fine. \n" << "I miss you. \n";
    // [3]
    cout << "Enter the name of our friend \n";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately? \n";
    // [4]
    cout << "Enter your age: \n";
    int age;
    cin >> age;
    if (age <= 0 || age >= 110)
        cout << "you're kidding! \n";

    else if(age < 12)
      cout << "Next year you'll be " << age + 1 << " years old \n" ;

    else if(age == 17)
      cout << "Next year you will be able to vote. \n" ;

    else if(age > 70)
      cout << "Are you retired? \n" ;

    else
        cout << "I hear you just had a birthday and you are " << age << " years old. \n";


}