#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using vll=vector<ll>;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve() {
    int n; cin>>n;
    vll a,b;      // First and second min

    rep(i,0,n) {
        int m; cin>>m;
        vll x(m); rep(i,0,m) cin>>x[i];
        ll a1=*min_element(all(x));
        a.push_back(a1);
        
        x.erase(find(all(x),a1));
        ll b1=*min_element(all(x));
        b.push_back(b1);        
    }

    cout<<*min_element(all(a)) -*min_element(all(b)) +(ll)accumulate(all(b),0LL)<<"\n";
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}