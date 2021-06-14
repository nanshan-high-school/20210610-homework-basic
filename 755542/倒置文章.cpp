#include <iostream>
using namespace std;
int main() {
    string S = "";
    string ans = "";
    int start = 0;
    int finish = 0;

    cin >> S;
    for (int i = 0; i < S.size(); i++) {  //從零開始讀
        if (S[i] == '-'){  //是負
            start = i;  //從這裡開始
            for (int j = start; j < S.size(); j++) {  //從start開始讀
                if (S[j] == '+' || j == S.size() - 1) {  //直到正或最後
                    finish = j;  //到這裡結束
                    for (int z = finish; z > i; z--) {  //倒放
                        if (S[z] != '+' && S[z] != '-') {
                            ans += S[z];
                        }
                    }
                    i = finish;
                    break;
                }
            }
            continue;
        }
        if (S[i] != '+') {
            ans += S[i];
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
    }
}
