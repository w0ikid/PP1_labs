#include <iostream>

using namespace std;
string lucky(string s){
    int last_digit = s[s.length() - 1] - 48 , sum = 0;

    for (int i = 0; i < s.length(); i++){
        sum = sum + s[i] - 48;
    }

    if (sum % last_digit == 0){
        return "Yes";
    }
    else{
        return "No";
    }
}
int main(){
    string s;
    cin >> s;
    cout << lucky(s);
    return 0;
}