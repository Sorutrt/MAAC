#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    rep(i,n-1) {
        int a;
        cin >> a;
        ans += a;
    }
    ans *= -1;
    cout << ans << endl;
}
