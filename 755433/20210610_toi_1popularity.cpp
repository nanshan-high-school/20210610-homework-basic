#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    
    int popularity[r + 2][c + 2], ans[r + 2][c + 2];

    for (int i = 0; i < r + 2; i++) {
        for (int j = 0; j < c + 2; j++) {
            popularity[i][j] = 0;
        }
    }

    for(int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> popularity[i][j];
        }
    }

    for(int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (popularity[i][j] == 0) {
                int total = 0, amount = 0;

                if (popularity[i + 1][j] != 0) {
                    total += popularity[i + 1][j];
                    amount++;
                }
                if (popularity[i - 1][j] != 0) {
                    total += popularity[i - 1][j];
                    amount++;
                }
                if (popularity[i][j + 1] != 0) {
                    total += popularity[i][j + 1];
                    amount++;
                }
                if (popularity[i][j - 1] != 0) {
                    total += popularity[i][j - 1];
                    amount++;
                }
                if (amount == 0) {
                    ans[i][j] = 0;
                } else {
                    ans[i][j] = total / amount;
                }
            } else {
                ans[i][j] = popularity[i][j];
            }
        }
    }

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}
