#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main() {

    int n; cin >> n;
    for(int i=0; i<n; i++) {
        int a;
        for(int j=0; j<n; j++) {
            cin >> a;
            if(a==1) cout << j+1 << ' '; 
        }
        cout << '\n';
    }

}
