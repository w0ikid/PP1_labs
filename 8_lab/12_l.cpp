#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    sort(array.begin(), array.end());
    auto last = unique(array.begin(), array.end());
    array.erase(last, array.end());

    cout << array.size();

    return 0;
}
