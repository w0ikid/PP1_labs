#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string to_lower(string s){
    string t;
    for (int i = 0; i < s.length(); i++){
        t = t + (char)tolower(s[i]);
    }
    return t;
}
int main() {
    string s;
    cin >> s;
    s = to_lower(s);

    sort(s.begin(), s.end());

    auto last = unique(s.begin(), s.end());

    s.erase(last, s.end());

    cout << s.length() << endl;

    for (int i = 0; i < s.length(); i++){
        cout << s[i] << " ";
    }

    return 0;
}
