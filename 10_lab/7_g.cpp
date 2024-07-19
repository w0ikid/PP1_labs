#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<pair<pair<string, int>, pair<string, int>>, int> mapArray;

    for (int i = 0; i < n; i++) {
        string a, b;
        int score1, score2;

        cin >> a >> score1 >> b >> score2;

        int sum = score1 + score2;

        mapArray[{{a, score1}, {b, score2}}] = score1 + score2;
    }
    for (auto it = mapArray.begin(); it != mapArray.end(); it++) {
        cout << (it->first).first.first << " and " << (it->first).second.first << " " << it->second << "\n";
    }

    return 0;
}
