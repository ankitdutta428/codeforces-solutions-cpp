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



void solve(){
   int n;
   cin>>n;
   a.resize(n);
   f(n) cin>>a[i];
   
   int count=0;
   vector<int> x,y;
   for(int i=1;i<=n;i++){
       if(i>a[i-1]){
           x.push_back(i);
           y.push_back(a[i-1]);
       }
   }
   if(x.size()==0) cout<<0<<endl;
   else{
      sort(y.begin(),y.end());
      for(auto i:x){
          int up = upper_bound(y.begin(),y.end(),i)-y.begin();
          count += (x.size()-up);
      }
      cout<<count<<endl;
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
    while(t--) solve();
}

