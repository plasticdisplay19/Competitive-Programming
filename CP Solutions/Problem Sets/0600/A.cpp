#include <bits/stdc++.h>
using namespace std;


using vs=vector<string>;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)

bool help(string s) {
    if (s=="") return false;

    for (char c:s) {
        if (not(c-'0'<=9 and c-'0'>=0)) return false;
    }
    if (s[0]=='0' && s.size()>1) return false;
    if (s.find('.')!=string::npos) return false;
    return true;
}

int main() {
    meow
    string s; cin>>s;
    
    string x="";
    vs a,b;

    for (char c:s) {
        if (c==',' or c==';') {
            if (help(x)) a.push_back(x);
            else b.push_back(x);
            x="";
        } else x+=c;
    }

    if (help(x)) a.push_back(x);
    else b.push_back(x);

    if (a.size()==0) {cout<<"-\n";}
    else {
        cout<<'"';
        rep(i,0,a.size()) {
            cout<<a[i];
            if (i!=(a.size()-1)) cout<<',';
        }
        cout<<'"'<<"\n";
    
    }

    if (b.size()==0) {cout<<"-\n";}
    else {
        cout<<'"';
        rep(i,0,b.size()) {
            cout<<b[i];
            if (i!=(b.size()-1)) cout<<',';
        }
        cout<<'"';
    }

}