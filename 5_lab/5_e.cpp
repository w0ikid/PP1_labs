#include <iostream>
#include <string>

using namespace std;

int main(){
    int sum_even = 0, sum_odd = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++){
        int digit = s[i] - '0';
        if (i % 2 == 0){
            sum_even = sum_even + digit;
        }
        else{
            sum_odd = sum_odd + digit;
        }
    }

    if (sum_even == sum_odd){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}