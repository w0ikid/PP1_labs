#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int n){
    if (n == 1){
        return false;
    }
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n, k;
    cin >> n;
    vector <int> array(n);

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    
    cin >> k;

    sort(array.begin(), array.end());

    for (int i = 0; i < k; i++){
        cout << array[i] << " ";
    }

    return 0;
}