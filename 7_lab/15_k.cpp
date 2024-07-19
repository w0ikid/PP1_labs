#include <iostream>
using namespace std;

void function(int n, int k) {
    if (n < k) {
        if (n >= 10) {
            cout << (char)((n - 10) + 'A');
        } else {
            cout << n;
        }
    } else {
        function(n / k, k);
        int remainder = n % k;
        if (remainder >= 10) {
            cout << (char)((remainder - 10) + 'A');
        } else {
            cout << remainder;
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    function(n, k);
    return 0;
}
