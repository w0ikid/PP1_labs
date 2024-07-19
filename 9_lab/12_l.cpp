#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <pair<int, int>> array;

    for (int i = 1; i <= n; i++){
        int a, b;
        cin >> a >> b;

        array.push_back(make_pair(a + b, i));
    }

    sort(array.begin(), array.end());

    for (int i = 0; i < n; i++){
        cout << array[i].second << " ";
    }

    return 0;
}