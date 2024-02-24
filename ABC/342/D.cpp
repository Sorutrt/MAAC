// !!! result is WA. wrong program

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// https://algo-logic.info/is-squere/
bool is_squere(long long N) {
    long long r = (long long)floor(sqrt((long double)N));  // 切り捨てした平方根
    return (r * r) == N;
}

int main() {
    int n;
    cin >>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >>a.at(i);
    cout << "input success" << endl;
    
    int cnt=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1; j<n; j++) {
            ll ij = a.at(i)*a.at(j);
            if(is_squere(ij)) {
                cnt++;
            }
        }
    }

    cout << '\n' << cnt;

    return 0;
}
