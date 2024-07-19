#include <iostream>
#include <map>
#include <string>

using namespace std;


int main() {
    int n;
    cin >> n;

    map<string, int> episodes;

    for (int i = 0; i < n; i++) {
        string dorama;
        cin >> dorama;

        int k;
        cin >> k;

        episodes[dorama] = episodes[dorama] + k;
    }

    map<string, int>::iterator it;

    for (it = episodes.begin(); it != episodes.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
