#include <bits/stdc++.h>
using namespace std;

using vi=vector<int>;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve() {
    int n; cin>>n;
    vi a(n); rep(i,0,n) cin>>a[i];

    sort(all(a));
    int count=0,ans=a[0];

    rep(i,1,n) ans=max(ans,a[i]-a[i-1]);

    cout<<ans<<"\n";
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}