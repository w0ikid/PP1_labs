#include <iostream>

using namespace std;

void no_vowel(string a){
    string vowels = "aeiouAEIOU";
    string result = "";
    for (int i = 0; i < a.length(); i++){
        if (vowels.find(a[i]) == -1){
            cout << a[i];
        }
    }
}

int main(){
    string s;
    getline(cin, s);
    no_vowel(s);
    return 0;
}