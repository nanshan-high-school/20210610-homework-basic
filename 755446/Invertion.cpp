#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<char> output_pw;
	vector<char> reverse_num;
	string pw;
	cin >> pw;
	for (int i = 0; i < pw.length(); i++) {
	    if (isalnum(pw[i])) {
	        output_pw.push_back(pw[i]);
	    }
	    if (pw[i] == '+') {
            continue;       
        }
	    if (pw[i] == '-'){
	        for (i = i + 1; isalnum(pw[i]); i++) {
                reverse_num.push_back(pw[i]);	            
	        }
	        reverse(reverse_num.begin(), reverse_num.end());
	        for (int k = 0; k < reverse_num.size(); k++) {
	            output_pw.push_back(reverse_num[k]);
	        }
	    }
	}
	for (int i = 0; i < output_pw.size(); i++) {
		cout << output_pw[i];
	}
}
