#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    long long int n;
    cin >> n;

    unordered_set<int> elements_set;
    unordered_set<int> elements_set2;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        elements_set.insert(num);
    }

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        elements_set2.insert(num);
    }

    for (int i = 0; i < n; i++){
        cout << elements_set(i) << " ";
    }

    return 0;
}