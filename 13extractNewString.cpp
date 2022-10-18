// Extract from the given string STR, starting from position P, L characters into another string STR2. e.g. STR1="BATATA", P=2, L=4. Then STR2="ATAT

#include <iostream>
using namespace std;
int main()
{

    string STR1, STR2 = " ";
    int l, p;
    cout << "Enter a string" << endl;
    getline(cin, STR1);
    cout << "Enter position of Character";
    cin >> p;
    p--;
    cout << "Enter Length of new string";
    cin >> l;

    for (int i = p; i < p + l; i++) // Aniketing
    {
        STR2 = STR2 + STR1[i];
    }
    cout << STR2;
}