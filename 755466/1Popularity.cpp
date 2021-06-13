#include <iostream>
using namespace std;

int main() {
    int R, C, total = 0 , temp = 4;
    cin >> R >> C;
    int A[R + 2][C + 2], ans[R][C];
    
    for (int i = 0; i <= R + 1; i++){
        // cout << i << endl;
        A[i][0] = 0;
        A[i][C + 1] = 0;
    }
    for (int i = 0; i <= C + 1; i++){
        // cout << i << endl;
        A[0][i] = 0;
        A[R + 1][i] = 0;
    }

    for (int i = 1; i < R + 1; i++){
        for (int j = 1; j < C + 1; j++) {
            // cout << i << " " << j << endl;
            cin >> A[i][j];
        }
    }

    for (int i = 1; i < R + 1; i++){
        for (int j = 1; j < C + 1; j++) {
            if (A[i][j] == 0) {
                total += A[i - 1][j] + A[i + 1][j] + A[i][j - 1] + A[i][j + 1];
                if (A[i - 1][j] == 0){
                    temp -= 1;
                }
                if (A[i + 1][j] == 0){
                    temp -= 1;
                }
                if (A[i][j + 1] == 0){
                    temp -= 1;
                }
                if (A[i][j - 1] == 0){
                    temp -= 1;
                }
                if (temp == 0) {
                    ans[i - 1][j - 1] = 0;
                } else {
                    ans[i - 1][j - 1] = (total)/temp;
                }
            } else {
                ans[i - 1][j - 1] = A[i][j];
            }
            total = 0;
            temp = 4;
        }
    }

    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
