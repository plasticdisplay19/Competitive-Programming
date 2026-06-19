#include <bits/stdc++.h>
using namespace std;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void solve() {
    string s; cin>>s;
    int a=0,b=0;    // Count for zeros and ones
    for (char c:s) {
        if (c=='0') a++;
        else b++;
    }

    int count=0;
    
    for (char c:s) {
        if (c=='0' and b) {count++;b--;}
        else if (c=='1' and a) {count++;a--;}
        else break;
    }

    cout<<s.size()-count<<"\n";
}

int main() {
    meow
    int t; cin>>t;
    while (t--) solve();
    return 0;
}