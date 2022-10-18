// Write a program to accept a string and check if all the characters in the string are alphabets.
// #include <iostream>
// using namespace std;

// int main()
// {
//     string str;
//     bool string;

//     cout << "Enter a string" << endl;
//     getline(cin, str);
//     if (string == str.compare("[a-zA-Z]+"))
//     {
//         cout << "String contain alphabets";
//     }
//     else
//     {
//         cout << "String doesnt contain only alphabets";
//     }

//     return 0;
// }
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
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            count++;
    }
    if (count == str.length())
    {
        cout << "All characters in the string are alphabets";
    }
    else
    {
        cout << "All characters in the string are not alphabets";
    }

    cout << endl;
    return 0;
}