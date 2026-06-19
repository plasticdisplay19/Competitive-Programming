#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using vll=vector<ll>;
using sc=set<char>;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>b;i--)

void solve() {
    int n; string s; cin>>n>>s;
    
    unordered_set<char> x;
    vll pre(n+1,0),suff(n+1,0);

    rep(i,1,n+1) {
        x.insert(s[i-1]);
        pre[i]=x.size();
    }

    x.clear();
    rrep(i,n,0) {
        x.insert(s[i-1]);
        suff[i]=x.size();
    }

    ll ans=0;

    rep(i,0,n) ans=max(pre[i]+suff[i+1],ans);
    cout<<ans<<"\n";
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}