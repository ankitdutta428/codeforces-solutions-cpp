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


void solve(){
    int n;
    cin>>n;
    
    vector<int> dp(n+1, 0);
    //cout<<f(n,dp,rep,5)<<endl;
    
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i>=j) dp[i] = (dp[i] + dp[i-j])%M;
        }
    }
    
    cout<<dp[n]<<endl;
}

signed main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}