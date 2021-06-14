#include <iostream>
using namespace std;
int main() {
    int RC[9][9];
    int RC_copy[9][9];
    int R = 0;
    int C = 0;
    int count = 0;
    int total = 0;
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> RC[i][j];
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            RC_copy[i][j] = RC[i][j];
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            count = 0;
            if (RC[i][j] == 0) {
                if (i == 0 && j == 0) {  //最左上方
                    if (RC[i][j + 1] == 0) {
                        count++;
                    }
                    if (RC[i + 1][j] == 0) {
                        count++;
                    }
                    if (count == 2) {
                        count = 1;
                    }
                    total = (RC[i][j + 1] + RC[i + 1][j]);
                    RC_copy[i][j] = (total / (2 - count));
                    continue;
                } else if (i == 0 && j == (C - 1)) {  //最右上方
                    if (RC[i][j - 1] == 0) {
                        count++;
                    }
                    if (RC[i + 1][j] == 0) {
                        count++;
                    }
                    if (count == 2) {
                        count = 1;
                    }
                    total = (RC[i][j - 1] + RC[i + 1][j]);
                    RC_copy[i][j] = (total / (2 - count));
                    continue;
                } else if (i == (R - 1) && j == 0) {  //最左下方
                    if (RC[i - 1][j] == 0) {
                        count++;
                    }
                    if (RC[i][j + 1] == 0) {
                        count++;
                    }
                    if (count == 2) {
                        count = 1;
                    }
                    total = (RC[i - 1][j] + RC[i][j + 1]);
                    RC_copy[i][j] = (total / (2 - count));
                    continue;
                } else if (i == (R - 1) && j == (C - 1)) {  //最右下方
                    if (RC[i - 1][j] == 0) {
                        count++;
                    }
                    if (RC[i][j - 1] == 0) {
                        count++;
                    }
                    if (count == 2) {
                        count = 1;
                    }
                    total = (RC[i - 1][j] + RC[i][j - 1]);                    
                    RC_copy[i][j] = (total / (2 - count));
                    continue;
                } else if (i == 0) {  //上方
                    if (RC[i][j + 1] == 0) {
                        count++;
                    }
                    if (RC[i + 1][j] == 0) {
                        count++;
                    }
                    if (RC[i][j - 1] == 0) {
                        count++;
                    }
                    if (count == 3) {
                        count = 2;
                    }
                    total = (RC[i][j - 1] + RC[i + 1][j] + RC[i][j + 1]);
                    RC_copy[i][j] = (total / (3 - count));
                    continue;
                } else if (i == (R - 1)) {  //下方
                    if (RC[i][j + 1] == 0) {
                        count++;
                    }
                    if (RC[i][j - 1] == 0) {
                        count++;
                    }
                    if (RC[i - 1][j] == 0) {
                        count++;
                    }
                    if (count == 3) {
                        count = 2;
                    }
                    total = (RC[i][j - 1] + RC[i - 1][j] + RC[i][j + 1]);
                    RC_copy[i][j] = (total / (3 - count));
                    continue;
                } else if (j == 0) {  //左方
                    if (RC[i][j + 1] == 0) {
                        count++;
                    }
                    if (RC[i + 1][j] == 0) {
                        count++;
                    }
                    if (RC[i - 1][j] == 0) {
                        count++;
                    }
                    if (count == 3) {
                        count = 2;
                    }
                    total = (RC[i - 1][j] + RC[i + 1][j] + RC[i][j + 1]);
                    RC_copy[i][j] = (total / (3 - count));
                    continue;
                } else if (j == (C - 1)) {  //右方
                    if (RC[i][j - 1] == 0) {
                        count++;
                    }
                    if (RC[i + 1][j] == 0) {
                        count++;
                    }
                    if (RC[i - 1][j] == 0) {
                        count++;
                    }
                    if (count == 3) {
                        count = 2;
                    }
                    total = (RC[i - 1][j] + RC[i + 1][j] + RC[i][j - 1]);
                    RC_copy[i][j] = (total / (3 - count));
                    continue;
                } else {
                    if (RC[i][j + 1] == 0) {
                        count++;
                    }
                    if (RC[i + 1][j] == 0) {
                        count++;
                    }
                    if (RC[i - 1][j] == 0) {
                        count++;
                    }
                    if (RC[i][j - 1] == 0) {
                        count++;
                    }
                    if (count == 4) {
                        count = 3;
                    }
                    total = (RC[i][j - 1] + RC[i + 1][j] + RC[i][j + 1] + RC[i - 1][j]);
                    RC_copy[i][j] = (total / (4 - count));
                }

            }

        }
    }
    cout << "\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << RC_copy[i][j] << " ";
        }
        cout << "\n";
    }
}
