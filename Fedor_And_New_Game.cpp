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
vector<int> a,b,x;
vector<int> v={1,3,6,10,15};
int dx[4]={1,-1,1,-1}, dy[4]={-1,-1,1,1};
int N = 1e7;
vector<int> prime(N+1,1);
vector<int> store;


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
/*vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        int visit[V]={0};
        visit[0]=1;
        queue<int> q;
        q.push(0);
        
        vector<int> bfs;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            for(auto i:adj[node]){
                if(!visit[i]){
                    q.push(i);
                    visit[i]=1;
                }
            }
        }
        
        return bfs;
}

void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls){
        vis[node]=1;
        ls.push_back(node);
        for(auto i:adj[node]){
            if(!vis[i]) dfs(i,adj,vis,ls);
        }
}

vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V]={0};
        int start=0;
        vector<int> ls;
        dfs(start,adj,vis,ls);
        
        return ls;
    
}*/

/*bool dfs_cyclecheck(int node, int parent, vector<int> adj[], int vis[]){
    vis[node]=1;
    for(auto i:adj[node]){
        if(!vis[node]){
            if(dfs_cyclecheck(i,node,adj,vis)==true) return true;
        }
        else if(parent!=i){
            return true;
        }
    }
    return false;
}*/

void sieve(){
    
    prime[0] = prime[1] = 0; 
    for (int i = 2; i <= sqrt(1e7); ++i) {
        if (prime[i] == 1) {
            for (int j = i * i; j <= 1e7; j += i) {
                prime[j] = 0; 
            }
        }
    }
    
    
}


void solve(){
   int n,m,k;
   cin>>n>>m>>k;
   
   a.resize(m+1);
   f(m+1) cin>>a[i];
   int count=0;
   
   for(int i=0;i<m;i++){
       ll val = a[i]^a[m];
       int res = __builtin_popcount(val);
       if(res<=k) count++;
   }
   
   cout<<count<<endl;
   
}


signed main(){
    //ifstream in("input.txt");
    //ofstream out("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int misery=1;
    //cin>>misery;
    while(misery--) solve();
}

