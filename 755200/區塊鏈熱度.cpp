#include <iostream>

using namespace std;

int main() {
    int R, C;
    cin >> R >> C;
    int arr[R + 2][C + 2];
    for (int i = 0; i < R + 2; i++) {
        for (int j = 0; j < C + 2; j++) {
            arr[i][j] = 0;
        }
    }
    for (int i = 1; i < R + 1; i++) {
        for (int j = 1; j < C + 1; j++) {
            cin >> arr[i][j];
        }
    }
    int upload[R][C];
    int times = 0;
    for (int i = 1; i < R + 1; i++) {
        for (int j = 1; j < C + 1; j++) {
            if (arr[i][j] == 0) {
                if (arr[i - 1][j] == 0)
                    ++times;
                if (arr[i + 1][j] == 0)
                    ++times;
                if (arr[i][j - 1] == 0)
                    ++times;
                if (arr[i][j + 1] == 0)
                    ++times;
                times = 4 - times;
                if (times == 0) 
                    upload[i - 1][j - 1] = 0;
                else {
                    upload[i - 1][j - 1] = (arr[i - 1][j] + arr[i + 1][j] + arr[i][j - 1] + arr[i][j + 1]) / times;
                }
            }
            else {
                upload[i - 1][j - 1] = arr[i][j];
            }
            times = 0;
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << upload[i][j];
            cout << " ";
        }
        cout << endl;
    }
}
