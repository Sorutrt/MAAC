#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main() {
    string s;
    cin >> s;
    vector<int> a(3);
    rep(i,3) {
        a.at(i) = int(s.at(i+3) - '0');
    }
    int n = a.at(0)*100 + a.at(1)*10 + a.at(2);
    //cout << n << '\n';
    if(n <= 349 && n != 316 && n != 000) cout << "Yes" << '\n';
    else cout << "No" << '\n';

    return 0;
}
