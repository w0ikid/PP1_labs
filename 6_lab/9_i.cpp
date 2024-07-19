#include <iostream>
#include <string>

using namespace std;

string capital_even(string s){
    string a = "", k;
    for (int i = 0; i < s.length(); i++){
        if (i % 2 == 0){
            k = toupper(s[i]);
            a = a + k;
        }
        else{
            a = a + s[i];
        }
    }
    return a;
}
int main(){
    string s;
    cin >> s;
    cout << capital_even(s);
    return 0;
}