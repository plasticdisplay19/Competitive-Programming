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
#define rall(x) x.rbegin(),x.rend()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>b;i--)

const ll INF=1e18;
const ll MOD=1e9+7;
const int N=1e6+7;


int main() {
    meow
    int n,m; cin>>n>>m;
    vi a(n); rep(i,0,n) cin>>a[i];
    sort(rall(a));

    int ans=0,count=0;
    while (ans<m) {
        ans+=a[count];
        count++;
    }
    cout<<count;
}