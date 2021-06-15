#include <iostream>
#include <map>
using namespace std;

int main() {
    string password;
    cin >> password;
    int distint_character = 0;
    map<char, int> count;
    for (char each_char: password) {
        if (count.find(each_char) == count.end()) {
            count[each_char] = 1;
            distint_character++;
            continue;
        }
        count[each_char]++;
    }
    string list[101] = {""};
    for (auto n: count) {
        list[n.second] += n.first;
    }
    for (int i = 100; i > 0; i--) {
        if (list[i][0] != 0) {
            cout << list[i];
        }
    }
    cout << endl;
}
