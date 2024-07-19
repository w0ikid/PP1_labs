#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> array;

    vector<string>::iterator find_it;

    set <string> set;

    for (int i = 0; i < n;i++){
        string s;
        cin >> s;
        array.push_back(s);
        set.insert(s);
    }

    for (auto it = set.begin(); it != set.end(); it++) {
        find_it = find(array.begin(), array.end(), *it);
        cout << *it << " " << find_it - array.begin() + 1 << endl;
}

    return 0;
}