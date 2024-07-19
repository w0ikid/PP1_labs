#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    // treatment

    for (int i = 0; i < n; i++){
        if (a[i] == m){
            cout << i;
            break;
        }
        else if (a[i] > m){
            cout << i;
            break;
        }
        else if (a[n - 1] < m){
            cout << n;
            break;
        }
        else if (a[0] > m){
            cout << 0;
            break;
        }
    }

    return 0;
}
