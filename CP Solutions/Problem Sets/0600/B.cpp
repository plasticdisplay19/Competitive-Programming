#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using pii=pair<int,int>;
using vi=vector<int>;
using vll=vector<ll>;
using vpii=vector<pii>;
using vs=vector<string>;
using vb=vector<bool>;
using vvi=vector<vi>;
using si=set<int>;
using sll=set<ll>;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>b;i--)

const ll INF=1e18;
const ll MOD=1e9+7;
const int N=1e6+7;

void solve() {
    int n,m; cin>>n>>m;
    vi a(n),b(m);
    rep(i,0,n) cin>>a[i];   sort(all(a));

    rep(i,0,m) cin>>b[i];

    rep(i,0,m) {
        cout<<upper_bound(all(a),b[i]) - a.begin()<<" ";
    }
}

int main() {
    meow
    solve();
    return 0;
}