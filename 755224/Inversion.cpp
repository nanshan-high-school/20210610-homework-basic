#include <iostream>
using namespace std;

bool end(string line, int pos) {
    if (line[pos] != '+' && line[pos] != '-' && line[pos] != 0) return 0;
    return 1;
}

int main() {
    string line;
    cin >> line;
    bool reverse = 0;
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == '+') {
            reverse = 0;
            continue;
        }
        if (line[i] == '-') {
            reverse = 1;
            continue;
        }
        if (!reverse) {
            cout << line[i];
            continue;
        }
        if (reverse && end(line, i + 1)) {
            for (int j = i; !end(line, j); j--) {
                cout << line[j];
            }
        }
    }
}
