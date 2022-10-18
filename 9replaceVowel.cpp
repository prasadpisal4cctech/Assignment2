// Write a program to accept a string and replace every vowel in the string with the '*' character.

#include <iostream>
using namespace std;
int main()
{

    string str;

    cout << "Enter a string" << endl;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            str[i] = '*';
        }
    }

    cout << str;

    return 0;
}