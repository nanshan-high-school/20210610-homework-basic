#include <iostream>
using namespace std;

int main() {
    int width, height;
    cin >> width >> height;
    int arr[width][height];
    for (int j = 1; j < height+1; j++) {
        for (int i = 1; i < width+1; i++) {
            cin >> arr[i][j];
        }
    }
    //邊緣歸零(skip)
    //打分數
    int amounts = 4, temp = 0;
    for (int j = 1; j < height+1; j++) {
        for (int i = 1; i < width+1; i++) {
            if (arr[i][j] == 0) {
                if (arr[i][j-1] == 0 || arr[i][j-1] > 1000) {
                    amounts -= 1;
                } else {
                    temp += arr[i][j-1];
                }
                if (arr[i][j+1] == 0 || arr[i][j+1] > 1000) {
                    amounts -= 1;
                } else {
                    temp += arr[i][j+1];
                }
                if (arr[i-1][j] == 0 || arr[i-1][j] > 1000) {
                    amounts -= 1;
                } else {
                    temp += arr[i-1][j];
                }
                if (arr[i+1][j] == 0 || arr[i+1][j] > 1000) {
                    amounts -= 1;
                } else {
                    temp += arr[i+1][j];
                }
                temp /= amounts;
                arr[i][j] = temp;
            }
        }
    }
    //Output
    for (int j = 1; j < height+1; j++) {
        for (int i = 1; i < width+1; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
