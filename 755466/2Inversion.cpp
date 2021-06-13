#include <iostream>
using namespace std;

int main() {
    string A, Ans = "";
    cin >> A;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] == '-'){//有負
            for (int j = i; j < A.size(); j++) {
                if (A[j] == '+' || j == A.size() - 1) {
                    for (int z = j; z > i; z--) {
                        if (A[z] != '+' && A[z] != '-'){
                            Ans += A[z];
                        }
                    }
                    i = j;
                    break;
                }
            }
        } else {
            if (A[i] != '+') {
                Ans += A[i];
            }
        }
    }
    for (int i = 0; i < Ans.size(); i++) {
        cout << Ans[i];
    }
}