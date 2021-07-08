#include <iostream>
#include <vector>
using namespace std;

int main() {
    string p;
    cin >> p;
    
    vector<int> times;
    vector<string> s;
    int len = p.length();
    string temp_str;

    // 預設各字元為空字元並為 0 次
    for (int i = 0; i < p.length(); i++) {
        s.push_back("");
        times.push_back(0);
    }
    
    // 按順序計次
    for (int i = 0; i < p.length(); i++) {
        temp_str = p[i];
        for (int j = 0; j < i + 1; j++) {
            if (s[j] != temp_str && s[j] == "") {
                s[j] = temp_str;
                times[j] += 1;
                break;
            } else if (s[j] == temp_str) {
                times[j] += 1;
                break;
            }
        }
    }

    int temp_int = times[0];
    
    // 次數排序
    for (int i = p.length() - 1; i > 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (times[j] < times[j + 1]) {
                temp_int = times[j];
                times[j] = times[j + 1];
                times[j + 1] = temp_int;
                temp_str = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp_str;
            }
        }
    }

    // 次數一樣按字母順序排
    while (len--) {
        for (int i = 0; i < p.length(); i++) {
            if (times[i] == times[i + 1]) {
                if (s[i] > s[i + 1]) {
                    temp_str = s[i];
                    s[i] = s[i + 1];
                    s[i + 1] = temp_str;
                }
            }
        }
    }

    for (int i = 0; i < p.length(); i++) {
        if (s[i] != "") {
            cout << s[i];
        }
    }
}
