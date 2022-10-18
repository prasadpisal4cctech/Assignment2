// Write a program to accept a string and reverse it.

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string" << endl;
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << "Reverse string is:" << str;
    return 0;
}
