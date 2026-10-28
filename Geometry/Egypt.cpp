#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

void solve(){

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // ll t=1;
    // cin >> t;
    while(1){
        ll a, b, c;
        cin>>a>>b>>c;

        if(a == 0 && b == 0 && c == 0) break;

        vector<ll> v;

        v.push_back(a);
        v.push_back(b);
        v.push_back(c);

        sort(v.begin(), v.end());

        if((v[0] * v[0]) + (v[1] * v[1]) == (v[2] * v[2])) cout<<"right"<<endl;
        else cout<<"wrong"<<endl;
    }

    return 0;
}