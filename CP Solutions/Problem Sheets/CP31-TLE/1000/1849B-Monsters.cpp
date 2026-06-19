#include <bits/stdc++.h>
using namespace std;

using pii=pair<int,int>;
using vpii=vector<pii>;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve() {
    int n,k; cin>>n>>k;
    vpii x(n);
    rep(i,0,n) {
        cin>>x[i].first;
        x[i].first%=k; if (x[i].first==0) x[i].first=k;
        x[i].second=i+1;
    }

    sort(all(x),[](auto a,auto b) {
        if (a.first!=b.first) return a.first>b.first;
        return a.second<b.second;
    });

    for (auto p:x) cout<<p.second<<" "; cout<<"\n";
    return;
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}