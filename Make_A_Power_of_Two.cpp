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
int arr[200010]={0};
vector<int> a,b;

bool issquare(int n){
    long long low=0,high=n;
    long long mid;
    while(low<=high){
        mid=(low+high)/2;
        if(mid*mid==n) return true;
        else if(mid*mid<n){
            low=mid+1;
        }
        else high=mid-1;
    }
    return false;
}

bool iscube(int n){
    long long low=0, high=n;
    long long mid;
    while(low<=high){
        mid=(low+high)/2;
        if(mid*mid*mid==n) return true;
        else if(mid*mid*mid<n){
            low=mid+1;
        }
        else high=mid-1;
    }
    return false;
}

bool checker(int n){
    if(n&(n-1)) return false;
    else return true;
}

vector<string> store;

void solve(){
   int n;
   cin>>n;
   
   int ans=INT_MAX;
   if(checker(n)) cout<<0<<endl;
   else{
       
       string s=to_string(n);
       for(auto val:store){
           int c1=0, c2=0, taken=0;
           while(c1<s.size() and c2<val.size()){
               if(s[c1]==val[c2]){
                   taken++;
                   c2++;
               }
               c1++;
           }
           int temp=s.size() - taken + val.size() - taken;
           //cout<<temp<<endl;
           ans=min(ans,temp);
       }
       
       cout<<ans<<endl;
   }
   
}
    

signed main(){
    //ifstream in("input.txt");
    //ofstream out("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    for(int i=1;i<=2e18;i*=2){
        store.emplace_back(to_string(i));
    }
    while(t--) solve();
}

