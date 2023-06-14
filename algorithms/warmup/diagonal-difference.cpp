#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n][n];
    for(int i=0;i<n;i++){ 
    // cin>> A[0][0] 
    // cin>>A[0][1]
    //cin>> A[0][2]
    // cin>>A[1]
    
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    
    int sum1 =0; //top left -> bottom right =>0,0 => 1,1 => 2,2 => 3,3
    int sum2=0;  //top right -> bottom left => 0,n-1 => 1, n-2 => 2, n-3--- > n-1,0
    
    for(int i=0;i<n;i++) {
        sum1 = sum1 + A[i][i];
    }
    
    for(int i=0;i<n;i++){
        sum2 = sum2 + A[i][n-i-1];
    }
    
    cout<<abs(sum2-sum1);
    
}
