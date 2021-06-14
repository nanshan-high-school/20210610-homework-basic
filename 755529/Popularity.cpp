#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int num[r][c];
    int num_p[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> num[i][j];
        }
    }

    int count, d;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            count = 0;
            d = 0;
            if (num[i][j] != 0) {
                num_p[i][j] = num[i][j];
            } else {
                if (i != 0) {
                    if (num[i - 1][j] != 0) {
                        count += num[i - 1][j];
                        d += 1;
                    }
                }
                if (j != 0) {
                    if (num[i][j - 1] != 0) {
                        count += num[i][j - 1];
                        d += 1;
                    }
                }
                if (i != r - 1) {
                    if (num[i + 1][j]) {
                        count += num[i + 1][j];
                        d += 1;
                    }
                }
                if (j != c - 1) {
                    if (num[i][j + 1]) {
                        count += num[i][j + 1];
                        d += 1;
                    }
                }
                if (d != 0) num_p[i][j] = count / d;
                else num_p[i][j] = 0;
            }
        }
    }
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << num_p[i][j] << " ";
        }
        cout << endl;
    }
}
