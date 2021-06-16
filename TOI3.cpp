#include <algorithm>
using namespace std;
#include <iostream>
int main() {
    string P,P2 = "",Ans = "",fAns = "";
    int time = 0,temp = 0,temp1 = 0,time2 = 0;

    cin >> P;
    sort(P.begin(), P.end());
    for (int i=0; i < P.size(); i++){
      P2 += P[i];
    }
    
    for (int i = 0; i < P.size(); i++){
      for (int j= 0; j < P.size(); j++){
        if (P[i] == P2[j]){
          time += 1;
          if (time == 1){
            temp1 += 1;
          }
        }
      }
      time = 0;

    }
    int time_l[temp1],time_l2[temp1];
   
  
  
    for (int i = 0; i < P.size(); i++){
      for (int j = 0; j < P.size(); j++){
        if (P[i] == P2[j]){
          time += 1;
      
          if (time == 1){ 
            Ans += P[i];
            temp += 1;
          }
        }
      }
      
      for (int k = 1; k < time; k++){
        P[i+k] = '+';
      }
      if(time != 0){
        time_l[temp-1] = time;
      
      }

      
      time = 0;

    }
    for(int i = 0; i < P.size(); i++){
      time_l2[i] = time_l[i];
    }
    sort(time_l2,time_l2+temp,greater<int>());

    

    for (int i = 0; i < Ans.size(); i++){
      for (int j = 0; j < Ans.size(); j++){
        if (time_l2[i] == time_l[j]){
          time2 += 1;
          if(time2 == 1){
            fAns += Ans[j];
            time_l[j] = ' ';
          
          }

        }
      }
      time2 = 0;
    }
    for (int i = 0; i < fAns.size(); i++){
      cout << fAns[i];
    }
}
