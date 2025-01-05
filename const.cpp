// clang++ -std=c++11 -o const const.cpp
#include<iostream>
using namespace std;


int main(){

constexpr int max = 100; 
int n;
cin >> n;
constexpr int c1 = max + 7; // OK: c1 is 107
const int c2 = n + 7;
cout << c1 << '\n' << c2 << '\n';

}



