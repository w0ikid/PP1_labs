#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k, sum = 0;
    cin >> n;
    vector <int> array(n);
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cin >> k;
    sort(array.begin(), array.end());
    reverse(array.begin(), array.end());
    for (int i = 0; i < k; i++){
        sum = sum + array[i];
    }
    cout << sum;
    return 0;

}