#include <iostream>
using namespace std;
int main() {
    string In = "";
    string ans = "";
    int In_count[100]= {0};
    int count = 0;
    int max = 0;
    int max_num = 0;
    cin >> In;
    for (int i = 0; i < In.size(); i++) {  //找與第i個一樣的
        for (int j = 0; j < In.size(); j++) {  //數有幾次，存起來
            if (In[i] == In[j] && In[j] != ' ') {
                count++;
                if (i != j) {  //刪掉一樣的
                    In[j] = ' ';
                }
            }
        }
        In_count[i] = count;
        count = 0;
    }
    for (int i = 0; i < In.size(); i++) {
        for (int j = 0; j < In.size(); j++) {
            
            if (In_count[j] > max) {  //找次數最多的
                max = In_count[j];
                max_num = j;
            }
        }
        ans[i] = In[max_num];
        In_count[max_num] = 0;
        max = 0;
        max_num = -1;
    }
    for (int i = 0; i < In.size(); i++) {
        cout << ans[i];
    }
}
