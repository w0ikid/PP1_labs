#include <iostream>

using namespace std;

int main(){
    int n, l, r;
    long long sum = 0;
    cin >> n >> l >> r;
    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (((i + 1) >= l) && ((i + 1) <= r)){
            sum = sum + a[i];
        }
    }

    cout << sum;
    return 0;
}