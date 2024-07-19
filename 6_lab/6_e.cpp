#include <iostream>

using namespace std;
// 48 - 57

string find_num(string a, int x){
    int sum = 0;
    for (int i = 0; i < a.length(); i++){
        if ((int)a[i] >= 48 && (int)a[i] <= 57){
            sum++;
        }
    }
    if(sum >= x){
        return "YES";
    }
    else{
        return "NO";
    }
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    cout << find_num(s, n);
    return 0;
}