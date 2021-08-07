#include <iostream>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    
    int popBig[R + 2][C + 2];
    int pop[R][C];
    
    for (int i = 0; i < R + 2; i++) {
        popBig[0][i] = 0;
        popBig[i][0] = 0;
        popBig[R + 1][i] = 0;
        popBig[i][R + 1] = 0;
    }

    for (int i = 1; i < R + 1; i++) {
        for (int j = 1; j < C + 1; j++) {
            cin >> popBig[i][j];
        }
    }

    int upNum = 0;
    int downNum = 0;

    for (int i = 1; i < R + 1; i++) {
        for (int j = 1; j < C + 1; j++) {
            if (popBig[i][j] == 0) {
                if (popBig[i + 1][j] != 0) {
                    upNum += popBig[i + 1][j];
                    downNum++;
                }

                if (popBig[i][j + 1] != 0) {
                    upNum += popBig[i][j + 1];
                    downNum++;
                }

                if (popBig[i - 1][j] != 0) {
                    upNum += popBig[i - 1][j];
                    downNum++;        
                }

                if (popBig[i][j - 1] != 0) {
                    upNum += popBig[i][j - 1];
                    downNum++;           
                }

                if (downNum == 0) {
                    pop[i - 1][j - 1] = 0;
                } else {
                    pop[i - 1][j - 1] = upNum/downNum;
                }

                upNum = 0;
                downNum = 0;
                continue;
            } else {
                pop[i - 1][j - 1] = popBig[i][j];
                continue;
            }
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << pop[i][j];
            cout << " ";
        }

        if (i != R - 1) {
            cout << endl;
        }
    }
}
