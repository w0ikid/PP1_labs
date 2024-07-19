#include <iostream>

using namespace std;
float per(int n, int m){
    return (m * 100.0f) / n;
}
int main(){
    int n, m;
    cin >> n >> m;
    cout << per(n, m);
    return 0;
}