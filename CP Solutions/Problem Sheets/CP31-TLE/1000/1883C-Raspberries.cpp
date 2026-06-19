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
    int n,k; cin>>n>>k;
    vi a(k,0);

    rep(i,0,n) {
        int j; cin>>j;
        a[j%k]++;
    }

    // When already a number divisible by k is present
    if (a[0]!=0) {cout<<"0\n"; return;}
    
    // Case when k is prime
    if (k!=4) {
        if (a[k-1]) cout<<"1\n";
        else if (a[k-2]) cout<<"2\n";
        else if (a[k-3]) cout<<"3\n";
        else if (a[k-4]) cout<<"4\n";
        return;
    }


    // Case of k=4
    if (a[2]>=2) cout<<"0\n";
    else if (a[2]==1 and (a[1] or a[3])) cout<<"1\n";
    else if (a[3]) cout<<"1\n";
    else if (a[1]>1) cout<<"2\n";
    else cout<<"3\n";
    return;  
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}