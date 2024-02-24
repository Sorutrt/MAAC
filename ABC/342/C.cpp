// !!! result is TLE. bad algorithm

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n,q;
    string s;
    cin >> n >> s >> q;
    char c,d;
    for(int i=0;i<q;i++) {
        cin >> c >> d;
        replace(s.begin(), s.end(), c, d);
    }
    cout << s;

    return 0;
}
