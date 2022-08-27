#include"bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;
#define FIO                ios::sync_with_stdio(false),cin.tie(0)
#define rep(i,a,b)         for(int i=a;i<b;i++)
#define repe(i,a,b)        for(int i=a;i<=b;i++)
#define rrep(i,a,b)        for(int i=b;i>=a;i--)
#define trav(it,E)         for(auto it : E)cout<<it<<' ';cout<<endl
#define takeinp(it,E)      for(auto& it: E)cin>>it
#define PI                 acos(-1.0)
#define all(a)             a.begin(),a.end()
#define rall(a)            a.rbegin(),a.rend()
#define Unique(a)          sort(all(a)),a.erase(unique(all(a)),a.end())
#define lower(a)           transform(a.begin(), a.end(), a.begin(), ::tolower)
#define upper(a)           transform(a.begin(), a.end(), a.begin(), ::toupper)

#define sz(s)              (int)s.size()
#define vi                 vector<int>
#define vl                 vector<ll>
#define vc                 vector<char>
#define pii                pair<int,int>
#define pl                 pair<ll,ll>
#define vpi                vector<pii>
#define vpl                vector<pl>

#define F                  first
#define S                  second
#define lb                 lower_bound
#define ub                 upper_bound 
#define pb                 push_back 
#define ppb                pop_back 
#define pf                 push_front 
#define ppf                pop_front 
#define ins(a)             insert(a)

#define max3(a,b,c)        max(a,max(b,c))
#define max4(a,b,c,d)      max(a,max3(b,c,d))
#define min3(a,b,c)        min(a,min(b,c))
#define min4(a,b,c,d)      min(a,min3(b,c,d))
#define gcd(a, b)          __gcd(x, y)
#define lcm(a, b)          (a / gcd(a,b)) * b
#define endl              '\n'

#define inf                2000000000
#define INF                3000000000000000000

typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif  


 
int main()
{
    FIO;
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif
    

    
    
    #ifdef ONLINE_JUDGE
    cerr<<"Time elapsed: "<<1.0*clock()/CLOCKS_PER_SEC<<"s.\n";
    #endif
   
    return 0;
    
      
}

