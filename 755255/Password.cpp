#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    string type;
    string type_compare;
    vector<int> compare;
    vector<char> sort;
    int count = 0;
    int max = 0;
    int max_place = 0;

    cin >> type;
    type_compare = type;

    for(int i = 0; i < type.size(); i++) {
        for(int j = 0; j < type.size(); j++) {
            if (type_compare[i] == type[j]) {
                count++;
                type[j] = 32;
            }
        }
        compare.push_back(count);
        count = 0;
    }

    for(int i = 0; i < type.size(); i++) {
        for(int j = 0; j < type.size(); j++) {
            if (compare[j] > max) {
                max = compare[j];
                max_place = j;
            } else if (compare[j] == max) {
                if (type_compare[j] < type_compare[max_place]) {
                    max_place = j;
                }
            }
        }
        if (max == 0) {
            break;
        }
        sort.push_back(type_compare[max_place]);
        compare[max_place] = -1;
        max = 0;
        max_place = 0;
    }

    for(int i = 0; i < sort.size(); i++) {
       cout << sort[i];
    }
}
