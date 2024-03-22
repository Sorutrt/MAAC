#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
using ll = long long;

int main() {
    ll x;
    cin >>x;
    ll ans;

    if(x<0) {
        ans = x/10;
    }
    else if (x%10 == 0) {
        ans = x/10;
    }
    else {
        ans = x/10 +1;
    }

    cout << ans << '\n';

    return 0;
}
