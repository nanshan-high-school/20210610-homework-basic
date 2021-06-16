#include <iostream>
using namespace std;
int main() {
    string S ,Ans="",b="";
    cin >> S;
    for (int i = 0; i < S.size(); i++){
      if ( S[i] == '-'){
        for (int j = 0; j < S.size()-1; j++){
          if (S[i+j+1] != '+' && S[i+j+1] != '-'){
            b += S[i+j+1];
            
            S[i+j+1]='+';
          }else{
            break;
          }
        }
        for (int k=b.size()-1; k >= 0; k--){
          Ans += b[k];
        }
        b=" ";
      
     }else if (S[i] != '+'&& S[i] != '-' ){
       Ans += S[i];
     }
    }
    for(int i = 0;i < Ans.size(); i++){
      cout << Ans[i];
    }



}