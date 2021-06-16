#include <iostream>
using namespace std;
int main() {
    int R, C;
    cin >> R >> C;
    int arr[R + 2][C + 2];
    int ans[R][C];
    int total = 0;
    int devide = 0;
    for (int i = 0; i < R + 2; i++) {
        arr[0][i] = 0;
        arr[i][0] = 0;
        arr[R + 1][i] = 0;
        arr[i][R + 1] = 0;
    }
    for (int i = 1; i < R + 1; i++) {
        for (int j = 1; j < C + 1; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i < R + 1; i++) {
        for (int j = 1; j < C + 1; j++) {
            if (arr[i][j] == 0) {
                if (arr[i + 1][j] != 0) {
                    total += arr[i + 1][j];
                    devide++;
                }
                if (arr[i][j + 1] != 0) {
                    total += arr[i][j + 1];
                    devide++;
                }
                if (arr[i - 1][j] != 0) {
                    total += arr[i - 1][j];
                    devide++;        
                }
                if (arr[i][j - 1] != 0) {
                    total += arr[i][j - 1];
                    devide++;           
                }
                if (devide == 0) {
                    ans[i][j] = 0;
                } else {
                    ans[i][j] = total/devide;
                }
                total = 0;
                devide = 0;
                continue; 
            }
            ans[i][j] = arr[i][j];
        }
    }
    for (int i = 1; i < R + 1; i++) {
        for (int j = 1; j < C + 1; j++) {
            cout << ans[i][j];
            cout << " ";
        }
        cout << endl;
    }
}
