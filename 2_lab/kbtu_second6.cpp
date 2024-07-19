#include <iostream>

using namespace std;

int main(){
    int n, i, sum = 0;
    cin >> n;
    for (i = 0; i <= n ; i = i + 1){
        sum = sum + i;
    }
    cout << sum;
    return 0;
}