#include <iostream>
using namespace std;

int main() {
    int width, height;
    cin >> width >> height;
    int arr[width][height];
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cin >> arr[i][j];
        }
    }
    //邊緣歸零（為什麼沒辦法歸零啦！
    for (int i = 0; i < width; i++) {
        arr[i][-1] = 0;
        arr[i][height] = 0;
    }
    for (int j = 0; j < height; j++) {
        arr[-1][j] = 0;
        arr[width][j] = 0;
    }

    // int temp;
    // for (int i = 0; i < width; i++) {
    //     for (int j = 0; j < height; j++) {
    //         if (arr[i][j] == 0) {
    //             temp = arr[i+1][j] + arr[i-1][j] + arr[i][j+1] + arr[i][j-1];
    //             temp /= 4;
    //             arr[i][j] = temp;
    //         }
    //     }
    // }

    //Output
    cout << "-----" << endl;
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}