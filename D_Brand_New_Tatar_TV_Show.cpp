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
    int n, k; cin >> n >> k;
    in(a, n);
    sort(all(a));

    for(int i = 0; i < n; ){
        int j = i;
        while(j < n && a[i] == a[j]) j++;
        
        int exact_count = j - i;
        if(exact_count % 2 == 0){
            cout << "YES\n";
            return;
        }
        i = j;
    }


    for(int i = 0; i < n; ){

        int j = upper_bound(all(a), a[i] + k) - a.begin();
        int window_count = j - i;   

        if(window_count % 2 == 0){
            cout << "YES\n";
            return;
        }
        
        // Move i to the next distinct element
        int next_i = i;
        while(next_i < n && a[i] == a[next_i]) next_i++;
        i = next_i;             
    }

    cout << "NO\n";
}

int32_t main() {
    fast;
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}