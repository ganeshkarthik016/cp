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
        int n,k;cin>>n>>k;
        in(a,n);
        map<int,int> mp;
        fr(i,0,n) mp[a[i]]++;
        int c = LLONG_MAX;
        bool ans  = false;
        for(auto it = mp.rbegin();it!=mp.rend();it++){
           int a = it->first,b = it->second;
           if(a <= c) {
                if(b%2 == 0){
                ans = true; break;
                }
                else{
                c = a -k-1;
                }}
            else{
                ans = true; break;}
            }
            if(ans) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
           }

int32_t main() {
    fast;
    int t; cin >> t;
    while(t--){
    solve();
    }
    return 0;
}