#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main() {
    string s;
    cin >> s;

    vector<int> v(26);
    string ans = "Yes";
    for(char c: s) {
        int n = c - 'a';
        ++v.at(n);
    }

    sort(all(v));
    
    //debugprint
    //for(int hoge: v) cout << hoge;

    int cnt = 0, bn = -1;
    rep(i, 26) {
        int nn = v.at(i);
        if(bn!=-1 && nn != bn) {
            if(bn!=0 && nn!=0 && (cnt == 1 || cnt > 2)) {
                ans = "No";
                break;
            }
            cnt = 0;
        }
        ++cnt;

        //if(bn!=nn) cout << '\n';
        //cout << cnt << ' ';

        bn = nn;
    }
    if(cnt > 2 || cnt == 1) ans = "No";

    cout << ans << '\n';

    return 0;
}
