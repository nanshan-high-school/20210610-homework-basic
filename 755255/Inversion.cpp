#include <iostream>
#include <string>
using namespace std;
int main() {
    string type_in;
    cin >> type_in;
    for (int i = 0; i < type_in.size(); i++) {
        if (type_in[i] == 43) {
            continue;
        }
        if (type_in[i] == 45) {
            for (int j = i + 1; j < type_in.size(); j++) {
                if (type_in[j] == 43 || type_in[j] == 45 || j == type_in.size()-1) {
                    if (j == type_in.size() - 1)  {
                        for(int k = j; k > i; k--) {
                        cout << type_in[k];
                        }
                        return 0;
                    } else {
                        for(int k = j - 1; k > i; k--) {
                        cout << type_in[k];
                        }
                        i = j - 1;
                        break;
                    }
                }
            }
            continue;
        }
    cout << type_in[i];
    }
}
