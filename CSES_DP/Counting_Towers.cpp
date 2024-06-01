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
ll dp[1000001][2];



void solve(){
   int n;
   cin>>n;
   
   cout<<(dp[n][0] + dp[n][1])%M<<endl;
}

signed main(){
    int t;
    cin>>t;
    
    dp[1][1] = 1;
    dp[1][0] = 1;
   
   for(int i=2;i<1000001;i++){
       dp[i][0] = ((dp[i-1][0]*4)%M + dp[i-1][1]%M)%M;
       dp[i][1] = (dp[i-1][0]%M + (2*dp[i-1][1])%M)%M;
   }
   
   
   
    while(t--){
        solve();
    }
}