#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool flag = true;
    int max = 0 , m, t;
    string A, Ans = "", temp;
    vector <string> l;
    vector <int> times;
    cin >> A;
    for (int i = 0; i < A.size(); i++) {//去除相同
        temp = A[i];
        for (int j = 0; j < l.size(); j++) {
            if (temp == l[j]) {
                flag = false;
                times[j] += 1;
            }
        }
        if (flag) {
            l.push_back(temp);
            times.push_back(1);
        }
        flag = true;
    }

    for (int i = 0; i < l.size(); i++){//次數
        for (int j = 0; j < l.size(); j++) {
            if (times[j] < times[j + 1]) {
                t = times[j];
                times[j] = times[j + 1];
                times[j + 1] = t;
                temp = l[j];
                l[j] = l[j + 1];
                l[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < l.size(); i++){//次數
        for (int j = 0; j < l.size(); j++) {
            if (times[j] == times[j + 1]) {
               if (l[j] > l[j + 1]) {
                    t = times[j];
                    times[j] = times[j + 1];
                    times[j + 1] = t;
                    temp = l[j];
                    l[j] = l[j + 1];
                    l[j + 1] = temp;
               }
            }
        }
    }

    for (int i = 0; i < l.size(); i++) {
        cout << l[i];
    }
}
