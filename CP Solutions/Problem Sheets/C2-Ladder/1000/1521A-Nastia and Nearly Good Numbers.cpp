#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    ll a,b; cin>>a>>b;
    if (b==1) {cout<<"NO\n"; return ;}
    cout<<"YES\n";
    cout<<a<<" "<<a*(2*b-1)<<" "<<2*a*b<<"\n";
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}