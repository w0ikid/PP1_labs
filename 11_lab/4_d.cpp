#include <iostream>
int main() {
    int n, m;
    std::cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 0 && a[i][j + 1] == 0 && a[i + 1][j] == 0 && a[i + 1][j + 1] == 0 && i <= n - 2 && j <= n - 2) {
                std::cout << "NO\n";
                goto fin;
            }
            else if (a[i][j] == 1 && a[i][j + 1] == 1 && a[i + 1][j] == 1 && a[i + 1][j + 1] == 1 && i <= n - 2 && j <= n - 2) {
                std::cout << "NO\n";
                goto fin;
            }
        }
    }
    std::cout << "YES\n";
    fin:
    return 0;
}