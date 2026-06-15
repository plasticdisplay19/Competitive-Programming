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

ll binpow(ll a, ll b) {
    ll ans=1;
    while (b>0) {
        if (b&1) ans*=a;
        a*=a;
        b>>=1; // Bit shift to the right
    }
    return ans;
}

int main() {
    meow
    int n; cin>>n;
    ll x=binpow(4,n-3);

    /*Idea
    As there are total of 2n-2 cars only one block of n cars is possible
    So let there be (a-cars) (n-cars) (b-cars) where a+b=n-2
    So total ways to arrange a,b will be n-1

    Cosidering the case when a=0 or b=0 => will give total of 4 x 4^(n-3) *3  (for n-cars , remaining cars and adjacent to n-blocks should not be same car)
    
    Now for reamining (n-3) cases 
    4 * 4^(n-2) * 3^2  as both cars in a-block and b-block can not be same as that of orignal n consicutive cars*/
    cout<<x*(9*(n-3)+24);
}