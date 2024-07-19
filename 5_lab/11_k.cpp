#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    string s;
    cin >> s;
    string vowels = "aeiou";
    for (int i = 0; i < s.length(); i++){
        for (int j = 0; j < 5; j++){
            if (s[i] == vowels[j]){
                sum++;
                continue;
            }
        }
    }
    cout << sum;
    return 0;
}