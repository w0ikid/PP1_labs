#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float Hypotenuse (long n, long m){
    float ans;
    ans = sqrt(pow(n, 2) + pow(m, 2));
    return ans;
}

int main () {
    long n, m;
    cin >> n >> m;

    cout << scientific << setprecision(3) << Hypotenuse(n, m);
    return 0;
}