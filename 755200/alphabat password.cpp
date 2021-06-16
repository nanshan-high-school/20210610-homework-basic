#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp (pair<int, int>a, pair<int, int>b) {
    return a.second >= b.second;
}

int main() {
    string password;
    map<char, int> map;
    vector<char> Alpha;
    cin >> password;
    for (int i = 0; i < password.size(); i++) {
        auto searchIT = find(Alpha.begin(), Alpha.end(), password[i]);
        if (searchIT != Alpha.end()) {
            map[password[i]]++;
        }
        else {
            Alpha.push_back(password[i]);
            map[password[i]] = 1;
        }
    }
    
    vector<pair<char, int>> greatmax_no_ore;
    for (auto n: map) {
        greatmax_no_ore.push_back(make_pair(n.first,n.second));
    }
    sort(greatmax_no_ore.begin(), greatmax_no_ore.end(), cmp);
    for (auto n: greatmax_no_ore) {
        cout << n.first;
    }
}

