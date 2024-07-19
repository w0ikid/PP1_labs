#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, sum_even = 0, sum_odd = 0;
    cin >> n;
    vector <int> a(n);

    // add
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    // treatment

    for (int i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            sum_even++;
        }
        else{
            sum_odd++;
        }
    }
    cout << sum_even << " " << sum_odd;
    return 0;
}