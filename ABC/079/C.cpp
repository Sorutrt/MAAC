#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
using ll = long long;

int main() {
    int s;
    cin >> s;
    vector<int> a(4);
    rep(i, 4) {
        int tmp = s / pow(10, 3-i);
        for(int j=0; j<i; ++j) {
            tmp -= a.at(j) * pow(10, i-j);
        }
        a.at(i) = tmp;
    }


    for(int i = 0; i < (1 << 4); ++i) {
        bitset<3> t(i);
        
        int K = a.at(0);
        for(int j=0; j<3; ++j) {
            if(t.test(j)) { // op: +
                K += a.at(j+1);
            }
            else { // op: -
                K -= a.at(j+1);
            }
        }
        
        if(K==7) {
            rep(i, 4) {
                cout << a.at(i);
                if(i==3) break;
                if(t.test(i)) cout << "+";
                else cout << "-";
            }
            cout << "=7\n";
            break;
        }
    }

    return 0;
}
