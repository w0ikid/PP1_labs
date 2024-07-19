#include <iostream>
#include <string>

using namespace std;

int sumOfDigits (string integer) {
    if (integer.length() == 1)
    {
        return stoi(integer);
    }
    else
    {
        return stoi(integer.substr(0, 1)) + sumOfDigits(integer.substr(1));
    }
}

int main () {
    string s;
    cin >> s;
    cout << sumOfDigits(s);
    return 0;
}