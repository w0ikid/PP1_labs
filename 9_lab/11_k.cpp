#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <pair<int, int>> array;

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        array.push_back(make_pair(a, b));
    }

    

    return 0;
}