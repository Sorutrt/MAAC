#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main() {

    ll n,k;
    cin >> n >> k;

    vector<bool> s(k);
    rep(i,n) {
        ll p;
        cin >> p;
        if(p<=k) s.at(p-1) = 1;
    }
    
    ll ans=0;
    for(ll i=0; i<k; ++i) {
        if(!s.at(i)) ans += i+1;
    }

    cout << ans << '\n';

    return 0;
}
