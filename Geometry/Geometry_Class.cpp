#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

void solve(){
    double a, b, c;
    cin>>a>>b>>c;

    double PI = acos(-1);
    ll a1 = round(asin(a) * 180 / PI);
    ll a2 = round(asin(b) * 180 / PI);
    ll a3 = round(asin(c) * 180 / PI);

    ll mx = max({a1, a2, a3});

    if(a1 + a2 + a3 == 180) cout<<mx<<endl;
    else cout<< 180 - mx <<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }

    return 0;
}