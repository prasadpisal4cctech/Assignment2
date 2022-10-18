// Write a program to accept a string and calculate its length.

#include <iostream>
using namespace std;
int main()
{
    string str;

    cout << "Enter a string" << endl;
    getline(cin, str);
    cout << "Length of string is:" << str.length();
    return 0;
}