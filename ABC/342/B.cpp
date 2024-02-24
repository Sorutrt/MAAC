#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i=0;i<n;i++) {
        cin >> p.at(i);
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++) {
        int a,b; cin>>a>>b;
        for(int j=0;j<n;j++) {
            if(p.at(j)==a) {
                cout << a << '\n';
                break;
            }
            else if(p.at(j)==b) {
                cout << b << '\n';
                break;
            }
        }
    }

    return 0;
}