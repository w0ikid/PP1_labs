#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = a.size(); i > 0 ; i--){
        cout << a[i - 1] << " ";
    }
    return 0;
}