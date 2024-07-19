#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector <string> data_string;
    vector <int> data_int;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        int a;
        cin >> a;
        data_string.push_back(s);
        data_int.push_back(a);
    }

    sort(data_string.begin(), data_string.end());
    sort(data_int.begin(), data_int.end());

    for (int i = 0; i < n; i++){
        cout << data_string[i] << " " << data_int[i] << endl;
    }
    return 0;
}