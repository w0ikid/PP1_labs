#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector <pair <int, int> > s;

    for (int i = 0; i < n; i++) {  
        int a, b;
        cin >> a >> b;
        s.push_back(make_pair(a, b));
    }

    sort(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++){
        cout << s[i].first << " " <<s[i].second << endl;
    }

    return 0;
}
