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
    int n; cin>>n;
    int count=0;

    // Edge case when the logic fails
    // Any combination of 2*2 matrix cannot lead to a correct solution
    if (n==2) {cout<<"-1\n"; return ;}


    // FIrst Print all the odd numbers
    for (int i=1;i<=n*n;i+=2) {
        count++;
        cout<<i; cout<<(count%n==0 ? "\n" : " ");
    }

    // Then print all the even number
    for (int i=2;i<=n*n;i+=2) {
        count++;
        cout<<i; cout<<(count%n==0 ? "\n" : " ");
    }

}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}