// Write a program to accept a string and a position P. Print the character at position P in the string.

#include <iostream>

using namespace std;
int main()
{

    string str;
    int n;

    cout << "Enter a string" << endl;
    getline(cin, str);
    cout << "Enter position of character:" << endl;
    cin >> n;
    n--;
    str.at(n);
    cout << "Character at " << n << " Position is:" << str.at(n);

    return 0;
}