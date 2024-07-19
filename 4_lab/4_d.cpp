#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++){
        cout << i << " ";
        for (int j = 1; j < n; j++){
            if (i == 0){
                if (j == n - 1){
                    cout << j << endl;
                }
                else{
                    cout << j << " ";
                }
            }
            else{
                if (j == n - 1){
                    cout << i * j << endl;
                }
                else{
                    cout << i * j << " ";
                }
            }
        }
    }

    return 0;
}