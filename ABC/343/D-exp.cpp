// https://www.youtube.com/watch?v=8W_eI0tTbfU&t=3016s

#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0; i< (n); ++i)
using ll = long long;

int main() {
    int n,t;
    cin >> n >> t;
    vector<int> s(n);

    unordered_map<ll, int> mp;
    mp[0] = n;

    auto add = [&](int x, int num) {
        mp[x] += num;
        if(mp[x] == 0) mp.erase(x);
    };

    rep(i,t) {
        int a,b;
        cin >> a >> b;
        --a;
        add(s[a], -1);
        s[a] +=b;
        add(s[a], 1);
        cout << mp.size() << '\n';
    }

    return 0;
}