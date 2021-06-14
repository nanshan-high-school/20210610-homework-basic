#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string line;
    cin >> line;
    vector<char> word = {};
    vector<int> count = {};
    int max = 1;
    bool stop;
    int index;
    for (auto i : line) {
        stop = false;
        index = 0;
        for (auto j : word) {
            if (j == i) {
                stop = true;
                count[index] += 1;
                if (max < count[index]) max = count[index];
                break;
            }
            index += 1;
        }
        if (!stop) {
            word.push_back(i);
            count.push_back(1);
        }
    }

    for (int i = max; i > 0; i--) {
        vector<char> ans = {};
        index = 0;
        for (auto j : count) {
            if (j == i) ans.push_back(word[index]);
            index += 1;
        }
        sort(ans.begin(), ans.end());
        for (auto j : ans) {
            cout << j;
        }
    }
}
