#include <bits/stdc++.h>
using namespace std;
using vi=vector<int>;
#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve() {
    int n,x; cin>>n>>x;
    vi a(n); rep(i,0,n) cin>>a[i];


    // The minimum fuel is the maximum distance between two consecutive 
    int ans=a[0];
    rep(i,1,n) ans=max(ans,a[i]-a[i-1]);

    // For the last pump, we need to make a round trip from a[n] to x back to a[n]
    ans=max(ans,2*(x-a[n-1]));
    cout<<ans<<"\n";
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}