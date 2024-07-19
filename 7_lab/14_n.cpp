#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++){
        if (abs(a[i - 1] - a[i]) < k){
            cout << "cheater";
            return 0;
        }
    }
    cout << "no";
    return 0;
}