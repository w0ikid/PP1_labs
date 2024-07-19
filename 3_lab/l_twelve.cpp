// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){
//     int n, m;
//     cin >> n;
//     vector <int> c(n + m);
//     vector <int> find(n + m);

//     for (int i = 0; i < n; i++){
//         cin >> c[i];
//     }    

//     cin >> m;

//     for (int i = n ; i < m + n; i++){
//         cin >> c[i];
//     }

//     for (int i = 0; i < m + n;i++){
//         if(c[i] == c[m + i]){

//         }
//     }

//     // for (int i = 0; i < (m + n) - 1; i++){
//     //     for (int j = 0; j < ((m + n) - 1) - i; j++){
//     //         if (c[j] > c[j + 1]){
//     //             int temp = c[j];
//     //             c[j] = c[j + 1];
//     //             c[j + 1] = temp;
//     //         }
//     //     }
//     // }

//     // for (int i = 0; i < m + n; i++){
//     //     cout << c[i] << " ";
//     // }
    
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    long long a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int m;
    cin >> m;
    long long b[m];
    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }

    long long mer[n+m];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m){
        if(a[i] < b[j]){
            mer[k] = a[i];
            k++;
            i++;
        } else {
           mer[k] = b[j];
           k++;
           j++; 
        }
    }

    while(i < n){
        mer[k] = a[i];
        k++;
        i++; 
    }
    while(j < m){
        mer[k] = b[j];
        k++;
        j++; 
    }
    for(int i = 0; i < (n+m); ++i){
        cout << mer[i] << " ";
    }

    return 0;
}