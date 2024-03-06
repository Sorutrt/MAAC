// !!! result is TLE

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> s(n);
    for(int i=0; i<t; i++) {
        int a,b;
        cin >> a >> b;
        s.at(a-1) += b;
        set<int> st(s.begin(), s.end());
        cout << st.size() << '\n';
    }
    
    return 0;
}
