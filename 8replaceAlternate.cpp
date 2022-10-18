//Write a program to accept a string and starting with first character replace every alternate character with the '*' character.

#include<iostream>
using namespace std;
int main()
{
    
    string str;
    
    cout << "Enter a string" << endl;
    getline(cin, str);
for (int i = 0; i < str.length();i= i+2)
{
    str[i]='*';
}

     cout<<str;
    //cout<<str.replace(0 ,1,"*");

return 0;
}