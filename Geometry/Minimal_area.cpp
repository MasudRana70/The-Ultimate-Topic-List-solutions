#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

void solve(){
    ll n;
    cin>>n;

    vector<pair<ll, ll>> v(n);

    for(int i = 0; i < n; i++){
        cin>>v[i].first>>v[i].second;
    }

    ll ans = LLONG_MAX;

    for(int i = 0; i < n; i++){
        ll x1 = v[i].first, y1 = v[i].second, x2 = v[(i + 1) % n].first, y2 = v[(i + 1) % n].second;
        ll x3 = v[(i + 2) % n].first, y3 = v[(i + 2) % n].second;

        ll d = x1 * y2 + x2 * y3 + x3 * y1; //shoelace apply korechi
        ll b = y1 * x2 + y2 * x3 + y3 * x1;

        ll d_area = abs(b - d);

        ans = min(ans, d_area);
    }

    cout<<ans<<endl;
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t=1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }

    return 0;
}