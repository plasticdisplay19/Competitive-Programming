#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    ll n,k;  cin>>n>>k;

    // We start by giving every element 1,then 2, then 3.....
    // So the minimum advisable sum of all elements will be ceil(n/k) *k

    int sum=((n+k-1)/k)*k;

    // Now the minimum possible maximum element can be calculated using pigeon-hole principle
    // It will be ceil(sum/n);
    int ans=(sum+n-1)/n;
    cout<<ans<<"\n"; return;
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}