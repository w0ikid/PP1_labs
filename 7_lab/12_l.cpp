#include <iostream>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (s[start] != s[end]) {
        return false;
    }
    return isPalindrome(s, start + 1, end - 1);
}

string palindrome(string s) {
    if (isPalindrome(s, 0, s.length() - 1)) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    string s;
    cin >> s;
    cout << palindrome(s);
    return 0;
}
