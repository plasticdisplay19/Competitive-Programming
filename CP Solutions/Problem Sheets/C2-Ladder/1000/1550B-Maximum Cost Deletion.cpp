#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()


void solve() {
    int n,a,b; cin>>n>>a>>b;
    string s; cin>>s;

    int x=n*(a+b);            //Cost of deletion taken one at a time

    // This is equivalent to counting number of s[i]!=s[i-1] for 1<=i<=n-1;
    int m=unique(all(s))-s.begin();     // Returns the number of unique blocks of zeros and ones 
    int y=a*n + (m/2+1)*b;       // Minimum number of operation to delete m-blocks of zeros and ones are floor(m/2)+1
    
    cout<<max(x,y)<<"\n";
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}