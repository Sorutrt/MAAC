#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main() {
    
    int n;
    cin >> n;

    map<int, int> d;
    rep(i, n) {
        int a, c;
        cin >> a >> c;

        if(d.count(c)) { // exist
            d[c] = min(d[c], a);
        }
        else {
            d[c] = a;
        }
    }

    int ans = 0;
    for(auto p : d) ans = max(ans, p.second);
    cout << ans << endl;

    return 0;
}
