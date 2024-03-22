#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
using ll = long long;

int main() {
    string s;
    cin >> s;
    int sl=s.length();
    string ans = "Yes";
    if(!(s.at(0)=='<')) ans="No";
    for(int i=1; i<sl-1; ++i) {
        if(!(s.at(i)=='=')) {
            ans = "No";
            break;
        }
    }
    if(!(s.at(sl-1)=='>')) ans = "No";
    cout << ans << '\n';

    return 0;
}
