#include <iostream>

using namespace std;

int main(){
    int n;
    long long sum = 0;
    cin >> n;
    int a;

    for (int i = 0; i < n; i++){
        cin >> a;
        sum = sum + a;    
        }
    
    cout << sum;
    return 0;
}