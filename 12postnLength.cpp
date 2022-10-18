// Write a program to accept a string STR1, starting position P and length L.

#include <iostream>
using namespace std;
int main()
{

    string STR1;
    int l, p;
    cout << "Enter a string" << endl;
    getline(cin, STR1);
    cout << "Enter starting position of Character";
    cin >> p;
    p--;
    cout << "Enter Length of new string";
    cin >> l;

    // for (int i = p; i < p + l; i++) // Aniketing
    // {
    //     result = result + str[i];
    // }
    // cout << result;
}