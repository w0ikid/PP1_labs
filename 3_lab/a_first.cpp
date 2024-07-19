#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a(n);

    // add

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    // treatment 

    for (int i = 0; i < n; i++){
        if (a[i] % 2 != 0){
            cout << a[i] << " ";
        }
    }
    return 0;
}