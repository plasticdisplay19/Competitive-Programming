#include <bits/stdc++.h>
using namespace std;

using vi=vector<int>;
#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve() {
    int n,k; cin>>n>>k;
    vi a(n); rep(i,0,n) cin>>a[i];


    // The only case when the a non-sorted array cannot be sorted is k==1;
    if (k==1) {
        if (is_sorted(all(a))) {cout<<"YES\n";}
        else cout<<"NO\n";
        return;
    }

    cout<<"YES\n";
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}