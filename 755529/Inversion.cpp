#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string line;
    cin >> line;
    vector<char> temp = {};
    bool ltr;
    ltr = true;
    for (auto i : line) {
        if (i == '+') {
            ltr = true;
            reverse(temp.begin(), temp.end());
            for (auto j : temp) {
                cout << j;
            }
            temp = {};
        }
        else if (i == '-') ltr = false;
        else if (ltr) cout << i;
        else {
            temp.push_back(i);
        }
    }
    reverse(temp.begin(), temp.end());
    for (auto i : temp) {
        cout << i;
    }
}
