#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, sum = 0, k;
    cin >> n;
    vector <int> a(n);

    // add in a

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    // treatment 

    for (int i = 0; i < n; i++){

        k = a[i];

        // treatment all numbers in a

        while (k > 0) {
            if (k % 10 == 0){
                sum++;
                k = k / 10;
            }
            else{
                k = k / 10;
            }
        }
    }
    cout << sum;

    return 0;
}