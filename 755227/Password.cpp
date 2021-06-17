#include <iostream>
#include <vector>
using namespace std;

int main() {
    string pass;
    string Pass;

    cin >> pass;
    Pass = pass;

    int pLong = pass.size();
    int pTimes[pLong];
    int count = 0;

    for (int i = 0; i < pLong; i++) {
        for (int j = 0; j < pLong; j++) {
            if (Pass[i] == pass[j]) {
                count++;
                pass[j] = 32;
            }
        }

        pTimes[i] = count;
        count = 0;
    }

    int max = 0;
    int maxPlace = 0;
    vector<char> finalPass;

    for (int i = 0; i < pLong; i++) {
        for (int j = 0; j < pLong; j++) {
            if (pTimes[j] > max) {
                max = pTimes[j];
                maxPlace = j;
            } else if (pTimes[j] == max) {
                if (Pass[j] < Pass[maxPlace]) {
                    maxPlace = j; 
                }
            }
        }
        if (max == 0) {
            break;
        }
        finalPass.push_back(Pass[maxPlace]);
        pTimes[maxPlace] = -1;
        max = 0;
        maxPlace = 0;
    }
    for (int i = 0; i < finalPass.size(); i++) {
        cout << finalPass[i];
    }
}
