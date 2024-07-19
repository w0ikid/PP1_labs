#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, sum_min = 0, k;
    cin >> n >> m;
    int a[n][m];
    vector <int> u;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (j == m - 1){
                sum_min = sum_min + a[i][j];
                u.push_back(sum_min);
                sum_min = 0;
            }
            else{
                sum_min = sum_min + a[i][j];
            }
        }
    }
    int min = u[0];
    k = 1;
    for (int i = 1; i < n; i++){
        if (min > u[i]){
            min = u[i];
            k = i + 1;
        }
    }
    cout << k;
    return 0;
}