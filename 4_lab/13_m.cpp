#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int m[n+1][n+1]{0};

    int dr[4] = {0, 1, 0, -1};
    int dc[4] = {1, 0, -1, 0};
     
    int counter = 1, r = 1, c = 0, rotate = 0;
    while (counter <= n*n) {
        do {
            r += dr[rotate % 4];
            c += dc[rotate % 4];
            m[r][c] = counter;
            counter++;
        } while (m[r+dr[rotate % 4]][c+dc[rotate % 4]] == 0 && 
                max(r+dr[rotate % 4], c+dc[rotate % 4]) <= n && 
                min(r+dr[rotate % 4], c+dc[rotate % 4]) >= 1);
        rotate++;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++)
            cout << m[i][j] << ' ';
        cout << endl;
    }

    return 0;
}