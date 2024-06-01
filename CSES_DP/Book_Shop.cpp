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
   int n,x;
   cin>>n>>x;
   
   a.resize(n);
   b.resize(n);
   
   f(n) cin>>a[i];
   f(n) cin>>b[i];
   
   //vector<vector<int>> dp(n+1, vector<int>(x+1, 0));
   vector<int> prev(x+1, 0);
   
   for(int i=1;i<=n;i++){
       vector<int> curr(x+1);
       for(int j=0;j<=x;j++){
           if(j>=a[i-1]){
               curr[j] = max(prev[j], b[i-1] + prev[j-a[i-1]]);
           }
           else curr[j] = prev[j];
       }
       prev=curr;
   }
   
   cout<<prev[x]<<endl;
   
}

signed main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}