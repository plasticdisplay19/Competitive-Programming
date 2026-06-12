#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

bool issquare(int n) {
    // Mehhhh- Overflow is not an issue
    int x=sqrt(n);
    return x*x==n;
}

void solve() {
    int n; cin>>n;
    // The answer is when n/2 or n/4 are perfect squares
    
    // Just applying this in a single line because I am lazy
    if (n%2==0 && (issquare(n/2)) || (n%4==0 && issquare(n/4))) {cout<<"YES\n";}
    else {cout<<"NO\n";}


    // Visualization
    /*Take a small square with either 2 or 4 triangles initially
    Now try placing similar k-squares in a square pattern
    We will see that condition is never possible for an odd number
    But for even numbers the squares are only formed when either
    n/2 or n/4 is a perfect square*/
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}