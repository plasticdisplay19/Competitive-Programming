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


    // Idea
    /* Take y to be smallest element
    And x to be element from idx=1 to idx=(n/2)
    As x(mod y)<y for for all pairs none of it will appear in array
    */
    int count=0;
    while (count<(n/2)) {cout<<a[count+1]<<" "<<a[0]<<"\n"; count++;}
    return ;
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}