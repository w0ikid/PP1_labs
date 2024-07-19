#include <iostream>
#include <vector>
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
    int n, k, count = 0;
    cin >> n;
    vector <int> array(n);

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    cin >> k;

    
    for (int i = 0; i < n; i++){
        if (array[i] > k && isPrime(array[i])){
            count++;
        }
    }
    cout << count;
    return 0;
}