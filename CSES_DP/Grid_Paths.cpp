#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ll long long
#define f(n) for(int i=0;i<n;i++)
#define g(n) for(int j=0;j<n;j++)
#define int long long 
#define endl '\n'
int i,j,k;
const int M = 1e9+7;
vector<int> a,b;
vector<int> rep = {1,2,3,4,5,6};
//ll dp[1000001]={0};


void solve(){
   int n;
   cin>>n;
   
   char a[n][n];
   f(n){
       g(n) cin>>a[i][j];
   }
   
   if(a[0][0]=='*') {
    cout<<0<<endl;
    return;
   }
   
   vector<vector<int>> dp(n, vector<int>(n,0));
   
   dp[0][0] = 1;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i==0 and j==0) continue;
           if(a[i][j]!='*'){
               if(i-1<0) dp[i][j] += dp[i][j-1]%M;
               else if(j-1<0) dp[i][j] += dp[i-1][j]%M;
               else{
                   dp[i][j] += (dp[i][j-1] + dp[i-1][j])%M;
               }
           }
       }
   }
   
   cout<<dp[n-1][n-1]<<endl;
   
    
    
}

signed main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}