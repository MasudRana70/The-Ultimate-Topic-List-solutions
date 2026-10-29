#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

void solve(){
    double r1 , r2, r3;

    cin>>r1>>r2>>r3;

    double a = r1 + r2 , b = r2 + r3, c = r1 + r3;
    double s = (a + b + c) / 2.0;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    double PI = acos(-1);

    double A = acos((b*b + c*c - a*a) / (2 * b * c)) * 180.0 / PI;
    double B = acos((a*a + c*c - b*b) / (2 * a * c)) * 180.0 / PI;
    double C = acos((a*a + b*b - c*c) / (2 * a * b)) * 180.0 / PI;

    double b_area = ((A / 360.0) * PI * r3 * r3) + ((B / 360.0) * PI * r1 * r1) + ((C / 360.0) * PI * r2 * r2);

    double ans = area - b_area;

    cout<<fixed<<setprecision(6) << ans << endl;
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