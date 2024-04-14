#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)

int main() {
    string s,t;
    cin >> s >> t;

    const int btos = 'a' - 'A';
    vector<int> sv(s.length()), tv(t.length());
    rep(i, s.length()) {
        sv.at(i) = s.at(i) - btos;
    }

    rep(i, 3) {
        tv.at(i) = t.at(i);
    }

    //debugprint
    /* for(int a: sv) cout << a << ' ';
    cout << endl;
    for(int a: tv) cout << a << ' ';
    cout << endl; */

    int p = 0;
    string ans = "No";
    for(int a: sv) {
        if(a == tv.at(p)) ++p;
        if(p==3 || p==2 && tv.at(2)=='X') {
            ans = "Yes";
            break;
        }
    }

    cout << ans << '\n';

    return 0;
}
