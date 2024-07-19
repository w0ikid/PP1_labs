#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> checker(vector<pair<string, string>> database1, vector<pair<string, string>> database2){
    
}

int main(){
    int n;
    cin >> n;

    vector<pair<string, string>> array;

    for (int i = 0; i < n; i++){
        string s, t;
        cin >> s >> t;
        array.push_back(make_pair(s, t));
    }

    int m;
    cin >> m;

    vector<pair<string, string>> array2;

    for (int i = 0; i < m; i++){
        string s, t;
        cin >> s >> t;
        array2.push_back(make_pair(s, t));
    }

    return 0;
}
