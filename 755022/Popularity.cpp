#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int width, height;
    cin >> width >> height;
    int arr[width][height];
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            cin >> arr[i][j];
        }
    } // 輸入數字

    int narr[width + 2][height + 2];
    for (int i = 0; i < width+2; i++) {
         for (int j = 0; j < height+2; j++) {
             narr[i][j] = 0;
         }
    } 

    for (int i = 0; i < width; i++) {
         for (int j = 0; j < height; j++) {
             narr[i+1][j+1] = arr[i][j];
         }
    } //產生另一個外圍都是0的陣列

    int snarr[width + 2][height + 2];
    for (int i = 0; i < width+2; i++) {
        for (int j = 0; j < height+2; j++) {
            snarr[i][j] = narr[i][j];
        }
    } //複至另一個外圍都是0的陣列
    
    for (int i = 0; i < width+2; i++) {
        
        for (int j = 0; j < height+2; j++) {
            int temp = 4;            
            if(snarr[i+2][j+1]== 0) {
                temp --;
            }

            if(snarr[i][j+1]== 0) {
                temp --;
            }

            if(snarr[i+1][j+2]== 0) {
                temp --;
            }
            
            if(snarr[i+1][j]== 0) {
                temp --;
            }

            if (arr[i][j] == 0) {
                narr[i+1][j+1] = floor((snarr[i+2][j+1]+ snarr[i][j+1] + snarr[i+1][j+2] + snarr[i+1][j])/temp);
                //(小數問題???)
            }
        }
    } //執行運算

    cout << "-----" << endl;

    for (int i = 0; i < width+2; i++) {
        for (int j = 0; j < height+2; j++) {
            cout << narr[i][j] << " ";
        }
        cout << endl;
    } //輸出
}
