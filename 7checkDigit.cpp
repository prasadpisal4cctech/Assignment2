//Write a program to accept a string and check if all the characters in the string are digits.


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
        if  (str[i] >='0' && str[i] <= '9')
            count++;
    }
    if (count == str.length())
    {
        cout << "All characters in the string are Digit";
    }
    else
    {
        cout << "All characters in the string are not Digit";
    }

    cout << endl;
    return 0;
}