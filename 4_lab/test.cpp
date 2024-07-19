#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][(n * 2) - 1];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < (n * 2) - 1; j++){
            if (j <= ((((n * 2) - 1) / 2) + i) && j >= ((((n * 2) - 1) / 2) - i)){
                cout << "*";
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
    }

    return 0;  
}