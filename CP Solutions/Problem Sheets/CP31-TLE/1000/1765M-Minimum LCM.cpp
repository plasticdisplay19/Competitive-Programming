#include <bits/stdc++.h>
using namespace std;

using ll=long long;
#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

ll lcm(ll a,ll b) {
    return (a*b)/__gcd(a,b);
}

void solve() {
    ll n; cin>>n;

    // The answer is simple
    // Let d be highest divisor of n,(not equal to it)
    // FOr even numbers the case is direct 
    if (n%2==0) {cout<<n/2<<" "<<n/2<<"\n"; return;}

    ll d=1;             // For prime numbers 
    // For rest of odd numbers
    // Each test case works with worst time complexity O(root(n)) ;
    for (ll i=3;i*i<=n;i+=2) {
        if (n%i==0) {d=n/i;break;}
    }

    cout<<d<<' '<<n-d<<"\n";
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}