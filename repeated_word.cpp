// A program to check repeated words

#include<iostream>
#include<vector>
using namespace std;



int main(){
    int number_of_words = 0;
    string prev;
    string current;
    while( cin >> current){
        ++number_of_words;
        if(prev == current)
            cout << "word number " << number_of_words << " repeated: " << current << "\n";
            prev = current;
    }

    // char c = 'x';
    // cout << c << '\n';
    // int i1 = c;
    // cout << i1 << '\n';
    // int res = 12 + 7.3;
    // cout << res << '\n';

//     double d = 0; 
//     while (cin>>d) {
//         int i = d;
//         char c = i;
//         cout << "d==" << d
//             << " i=="<< i
//             << " c==" << c
//             << " char(" << c << ")\n";


 }



