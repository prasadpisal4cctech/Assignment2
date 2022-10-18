// Write a program to accept a string and check if all the characters in the string are alphanumeric.

#include <iostream>
using namespace std;
int main()
{
    string str;
    int count = 0;
    cout << "Enter a string: ";
    cin >> str;
    for (int i = 0; i <= str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >='0' && str[i] <= '9'))
            count++;
    }
    if (count == str.length())
    {
        cout << "All characters in the string are Alphanumeric";
    }
    else
    {
        cout << "All characters in the string are not Alphanumeric";
    }

    cout << endl;
    return 0;
}