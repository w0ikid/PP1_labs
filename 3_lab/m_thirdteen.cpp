#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> a;
    int n; 

    while (cin >> n) {
        a.push_back(n); 
    }

    int sum = 0;
    for (int i = 0; i < a.size(); ++i) {
        sum += a[i];
    }

    cout << sum << endl;

    return 0;
}
