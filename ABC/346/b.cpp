#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main() {

    vector<bool> keys = {0,1,0,1,0,0,1,0,1,0,1,0}; // 0=white, 1=black
    
    int w,b;
    cin >> w >> b;

    //w %= 7;
    //b %= 5;

    // cout << "w: " << w << ", b: " << b << '\n';

    bool yes = false;
    string ans = "";
    rep(i,12) { // i: start position
        int nw=w, nb=b;

        for(int j=0; j<w+b; ++j) {
            if(keys.at((i+j)%12)) --nb;
            else --nw;

            if(nw==0 && nb==0) {
                ans = "Yes";
                yes = true;
            }
            else if(nw<0 || nb<0) {
                ans = "No";
                yes = false;
                break;
            }
        }
        if(yes) break;
    }

    cout << ans << '\n';

    return 0;
}
