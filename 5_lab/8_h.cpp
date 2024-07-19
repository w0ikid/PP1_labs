#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int sum = 0, sum_last = 0, k = 0;
    string s;
    cin >> s;
    int a[s.length()], d[s.length()];

    for (int i = 0; i < s.length(); i++){
        a[i] = s[i] - 48;
    }

    sort(a, a + s.length());

    int first = a[0];

    for (int i = 0; i < s.length(); i++){
        if(i == s.length() - 1){
            if (first == a[i]){
                d[k] = sum + 1;
            }
            else{
                cout << "NO";
                return 0;
            }
        }
        else if (first != a[i]){
            first = a[i];
            d[k] = sum;
            k++;
            sum = 0;
            sum++;
        }
        else{
            sum++;
        }
    }

    for (int i = 0; i <= k; i++){
        for (int j = 0; j <= k; j++){
            if (d[i] != d[j]){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
        return 0;
    }

    return 0;
}