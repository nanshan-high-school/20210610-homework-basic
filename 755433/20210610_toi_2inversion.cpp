#include <iostream>
using namespace std;

int main() {
    string s, str_answer = "";
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '-') { // 負號位置
            for (int j = i + 1; j < s.length(); j++) {
                if (s[j] == '+' || s[j] == '-' || j == s.length() - 1) { // 到下個符號的位置
                    if (j == s.length() - 1) {
                        for (int k = j; k > i; k--) {
                            str_answer += s[k];
                        }
                        i = j;
                        break;
                    } else {
                        for (int k = j - 1; k > i; k--) {
                            str_answer += s[k];
                        }
                        i = j - 1;
                        break;
                    }
                }
            }
        } else if (s[i] != '+') {
            str_answer += s[i];
        }
    }
    cout << str_answer << endl;
}
