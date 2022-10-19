// Write a program to accept a string and convert all its characters to upper case.
#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main()
{
    string str;
    cout << "Enter a string" << endl;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if(islower(str[i]))
        {
           str[i] = str[i] - 32;
        }
    }
    cout << str;
}