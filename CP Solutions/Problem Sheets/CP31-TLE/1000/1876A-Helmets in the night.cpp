#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using pll=pair<ll,ll>;
using vpll=vector<pll>;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve() {
    ll n,p; cin>>n>>p;
    vpll x(n+1);
    x[0].first=p,x[0].second=2*n;

    rep(i,1,n+1) cin>>x[i].second;
    rep(i,1,n+1) cin>>x[i].first;

    sort(all(x));
    ll cost=p,count=1;

    rep(i,0,n+1) {
        if (count==n) break;
        ll m=min(x[i].second,n-count);
        cost+=m*x[i].first;

        count+=m;
    }
    cout<<cost<<"\n";
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}