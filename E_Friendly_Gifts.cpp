#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define fr(i,a,b) for(int i = a; i < b; i++)
#define add(v) accumulate((v).begin(), (v).end(), 0LL)
#define all(x) (x).begin(), (x).end()
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef vector<int> vi;
#define in(v,n) vi v(n); fr(i,0,n) cin>>v[i];

// ==================== Solve Function ====================
void solve(){
        int n; cin>>n;
        in(a,n);
        vector<vi> bi(n+1);
        unordered_map<int,int> mp;
        int  ans  = 0;
        fr(i,0,n){
            mp.clear();
            int mn = LLONG_MAX;
            int mx = LLONG_MIN;
            fr(j,i,n){
                mx = max(a[j],mx);
                mn = min(a[j],mn);
                if(mp.find(a[j])!=mp.end()){
                    break;
                }
                mp[a[j]]++;
                if(mp.size()==(mx-mn)+1&&mp.size()<=(n+1)/2){
                  bi[mx-mn+1].pb(mx);
                }
        }
    }
        fr(i,0,n){
            if(bi[i].size()<=1) continue;
            mp.clear();
            for(auto x:bi[i]){
                mp[x]++;
                if(mp.find(x-i)!=mp.end()||mp.find(x+i)!=mp.end()){
                    ans = i;
                    break;
                }
            }
        }
        cout<<ans<<endl;
        
}
int32_t main() {
    fast;
    int t; cin >> t;
    while(t--){
    solve();
    }
    return 0;
}