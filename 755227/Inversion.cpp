#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        if (word[i] == '+') {
            continue;
        }
        if (word[i] == '-') {
            for (int j = i + 1; j < word.size(); j++) {
                if (word[j] == '-' || word[j] == '+') {
                    for (int k = j - 1; k > i; k--) {
                        cout << word[k];
                    }
                    i = j - 1;
                    break;
                } else if (j == word.size() - 1) {
                    for (int k = j; k > i; k--) {
                        cout << word[k];
                    }
                    return 0;
                }
            }
            continue;
        }
        cout << word[i];
    }
}
