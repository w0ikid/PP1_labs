#include <iostream>

using namespace std;
int sum_a_b(int n, int k){
    return n + k;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << sum_a_b(a, b);
    return 0;
}