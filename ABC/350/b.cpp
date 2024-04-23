#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main() {
    int n,q;
    cin >> n >> q;
    vector<int> t(q);
    rep(i,q) {
        int ti;
        cin >> ti;
        t[i] = ti-1;
    }

    vector<bool> tooth(n);
    rep(i,n) {
        tooth[i] = true;
    }

    rep(i,q) {
        int hole = t[i];
        if(tooth[hole]) tooth[hole] = false;
        else tooth[hole] = true;
    }

    int ans=0;
    rep(i,n) {
        if(tooth[i]) ans++;
    }

    cout << ans << '\n';

    return 0;
}
