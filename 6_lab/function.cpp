// #include <iostream>

// using namespace std;
// // find gcd using a function

// int gcd(int a, int b){
//     while (b != 0){
//         int c = a % b;
//         a = b;
//         b = c;
//     }
//     return a;
// }
// void reduce(int &a, int &b){
//     int c = gcd(a, b);
//     a /= c;
//     b /= c;
// }
// int main(){
//     int n, m;
//     cin >> n >> m;
//     cout << gcd(n, m);
//     reduce(n, m);
//     cout << n << " " << m;
//     return 0;
// }

// #include <iostream>

// using namespace std;
// void rec() {
//     int n;
//     cin >> n;
//     if (n != 0){
//         rec();
//         cout << n << " ";
//     }
// }

// int main(){
//     rec();
//     return 0;
// }

// factorial using function

// #include <iostream>

// using namespace std;

// int factorial(int n){
//     if (n == 0){
//         return 1;
//     }
//     return n * factorial(n - 1); // ахуенная часть рекурсий
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << factorial(n);
//     return 0;
// }


#include <iostream>

using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;
    }
    return n * factorial(n - 1); // ахуенная часть рекурсий
}

int cnk(int n, int k){
    return factorial(n) / (factorial(k) * factorial(n - k));
}
int main(){
    cout << cnk(6, 3);
    return 0;
}