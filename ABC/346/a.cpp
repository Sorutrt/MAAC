#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main() {

    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);

    rep(i,n-1) {
        cout << a.at(i) * a.at(i+1) << ' ';
    }
    return 0;
}
