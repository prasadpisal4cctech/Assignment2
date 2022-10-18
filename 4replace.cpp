// Write a program to accept a string, a position P and a character T. Replace the character at position P in the string with character T.
#include <iostream>
using namespace std;
int main()
{
    string str;
    int p;

    cout << "Enter a string" << endl;
    getline(cin, str);
    cout << "Enter position of character ";
    cin >> p;

    cout << "New string is:" << str.replace(p, 1, "T");
    return 0;
}