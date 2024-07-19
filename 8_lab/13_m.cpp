#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    sort(array.begin(), array.end());
    auto last = unique(array.begin(), array.end());
    array.erase(last, array.end());

    for (int i = 0; i < array.size(); i++) {
        sum = sum + array[i];
    }

    cout << sum;
    
    return 0;
}
