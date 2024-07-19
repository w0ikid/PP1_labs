#include <iostream>

using namespace std;
int degree(int n){
    if (n == 0){
        return 1;
    }
    return 2 * degree(n )
}
int main() {
    int n;
    cin >> n;
    cout << degree(n);
    return 0;
}