#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    rep(i,n) {
        if((i+1)%3) cout << 'o';
        else cout << 'x';
    }

    return 0;
}
