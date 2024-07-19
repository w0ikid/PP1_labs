#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    vector <int> a(n);

    // add

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    // treatment

    for (int i = 0; i < n; i++){
        if (a[i] > 0){
            sum++;
        }
    }
    cout << sum;
    return 0;
}