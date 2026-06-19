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
using ld=long double;

#define meow ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define all(x) (x).begin(),(x).end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>b;i--)

const ll INF=1e18;
const ll MOD=1e9+7;
const int N=1e6+7;



int main() {
    meow
    // Input
    ld x1,y1,r1,x2,y2,r2;
    cin>>x1>>y1>>r1;
    cin>>x2>>y2>>r2;

    const ld pi=acos(-1.0L);
    ld d=sqrtl(((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)));

    // Case of no overlap
    if (d>=(r1+r2)) {cout<<fixed<<setprecision(15)<<0.0L; return 0;}

    //Case of full overlap
    ld r=min(r1,r2);
    if (d<=abs(r1-r2)) {cout<<fixed<<setprecision(15)<<pi*r*r; return 0;}


    // Caluclate angle of overlap for circle 1
    // Verify the formula geometrically
    // alpha=2cos-1(d^2+r1^2-r2^2)/2*d*r1
    ld alpha=2.0L * acosl((d*d+r1*r1-r2*r2)/(2*d*r1));

    // Similarly for circle-2
    ld beta=2.0L * acosl((d*d-r1*r1+r2*r2)/(2*d*r2));


    // Area of sector is r^2*(theta-sin(theta))/2;
    ld area=0.5L*r1*r1*(alpha-sinl(alpha))+ 0.5L*r2*r2*(beta-sinl(beta));

    cout<<fixed<<setprecision(15)<<area;
    return 0;

}