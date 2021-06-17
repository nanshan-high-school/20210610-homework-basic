#include <iostream>
using namespace std;

int main() {
    int width, height;
    cin >> height >> width;
    int arr[width+2][height+2];
    for (int j = 1; j < height+1; j++) {
        for (int i = 1; i < width+1; i++) {
            cin >> arr[i][j];
        }
    }
    //邊緣歸零(skip)
    //阿要複製表格
    int copy[width+2][height+2];
    for (int j = 1; j < height+1; j++) {
        for (int i = 1; i < width+1; i++) {
            copy[i][j] = arr[i][j];
        }
    }
    //打分數
    int amounts = 4, sum = 0;
    float result;
    int resultTwo;
    for (int j = 1; j < height+1; j++) {
        for (int i = 1; i < width+1; i++) {
            amounts = 4;
            sum = 0;
            if (copy[i][j] == 0) {
                if (copy[i][j-1] == 0 || copy[i][j-1] > 1000 || copy[i][j-1] < 0) {
                    amounts -= 1;
                } else {
                    sum += copy[i][j-1];
                }
                if (copy[i][j+1] == 0 || copy[i][j+1] > 1000 || copy[i][j+1] < 0) {
                    amounts -= 1;
                } else {
                    sum += copy[i][j+1];
                }
                if (copy[i-1][j] == 0 || copy[i-1][j] > 1000 || copy[i-1][j] < 0) {
                    amounts -= 1;
                } else {
                    sum += copy[i-1][j];
                }
                if (copy[i+1][j] == 0 || copy[i+1][j] > 1000 || copy[i+1][j] < 0) {
                    amounts -= 1;
                } else {
                    sum += copy[i+1][j];
                }
                result = sum / amounts;
                resultTwo = result;
                arr[i][j] = resultTwo;
            }
        }
    }
    //Output
    cout << "-----" << endl;
    for (int j = 1; j < height+1; j++) {
        for (int i = 1; i < width+1; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
