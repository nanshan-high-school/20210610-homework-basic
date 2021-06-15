#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int grid_a[x+2][y+2];
    int grid_b[x+2][y+2];
    for (int i = 0; i < x + 2; i++) {
        for (int j = 0; j < y + 2; j++) {
            grid_a[i][j] = 0;
            grid_b[i][j] = 0;
        }
    }
    for (int i = 1; i < x + 1; i++) {
        for (int j = 1; j < y + 1; j++) {
            cin >> grid_a[i][j];
            grid_b[i][j] = grid_a[i][j];
        }
    }
    for (int i = 1; i < x + 1; i++) {
        for (int j = 1; j < y + 1; j++) {
            if (grid_a[i][j] == 0) {
                int total = grid_a[i - 1][j] + 
                grid_a[i + 1][j] + 
                grid_a[i][j - 1] + 
                grid_a[i][j + 1];
                int amount = 0;
                if (grid_a[i + 1][j] != 0) amount++;
                if (grid_a[i - 1][j] != 0) amount++;
                if (grid_a[i][j - 1] != 0) amount++;
                if (grid_a[i][j + 1] != 0) amount++;
                if (amount == 0) amount = 1;
                grid_b[i][j] = total / amount;
            }
        }
    }
    for (int i = 1; i < x + 1; i++) {
        for (int j = 1; j < y + 1; j++) {
            cout << grid_b[i][j] << ' ';
        }
        cout << endl;
    }
}
