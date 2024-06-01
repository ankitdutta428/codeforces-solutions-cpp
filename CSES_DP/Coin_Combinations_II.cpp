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
ll dp[1000001]={0};


void solve(){
    int n,k;
    cin>>n>>k;
    
    a.resize(n);
    f(n) cin>>a[i];
    
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        for(int weight=1;weight<=k;weight++){
            if(weight>=a[i-1]){
                dp[weight] = (dp[weight] + dp[weight-a[i-1]])%M;
            }
        }
    }
    
    cout<<dp[k]<<endl;
    
    
}

signed main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}