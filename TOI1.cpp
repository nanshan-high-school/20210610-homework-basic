#include <iostream>
using namespace std;
int main() {
    int x,y;
  
    int time1=0,time2=0,time3=0;
    cin>>x>>y;
    int a[x][y];
    
    
    
    
    for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
        cin>>a[i][j];
      }
    }
    for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
        if(a[i][j]==0){
          for(int k=0;k<4;k++){
            if(k==0){
              if(a[i+1][j]!=0){
                time1+=1;
              }
            }else if(k==1){
              if(a[i-1][j]!=0){
                time1+=1;
              }
            }else if(k==2){
              if(a[i][j+1]!=0){
                time1+=1;
              }
            }else if(k==3){
              if(a[i][j-1]!=0){
                time1+=1;
              }
            }
          }
        }
        a[i][j]=(a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i][j-1])/time1;
        time1=0;
        
      
      
      
      }
    }
    
    
    for(int i=0;i<x;i++){
      for(int j=0;j<y;j++){
        if(j==y-1){
          cout<<a[i][j]<<"\n";
        }
        
        cout<<a[i][j];
      }
    }
        
    
    
}
B
C
B
C
C
C
B
B
D
D
D
A
B
D
A
A
C
B
B
D
B
C
D
A

