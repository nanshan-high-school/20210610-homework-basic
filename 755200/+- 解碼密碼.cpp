#include <iostream>
#include <vector>

using namespace std;
int main() {
    string problem;
    vector<char> solve;
    cin >> problem;
    int locate = problem.size();
    for (int i = problem.size(); i > 0; i--) {
        if (problem[i] == '+') {
            for (int j = locate; j > i + 1; j--) {
                solve.push_back(problem[j - 1]);
            }
            locate = i;
        } 
        if (problem[i] == '-') {
            for (int j = i; j < locate - 1; j++) {
                solve.push_back(problem[j + 1]);
            }
            locate = i;
        }
    }
    for (int j = locate - 1; j >= 0; j--) {
        solve.push_back(problem[j]);
    }
    for (int k = solve.size(); k >= 0; k--) {
        cout << solve[k - 1];
    }
}

