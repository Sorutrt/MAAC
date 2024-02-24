#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;
    int slen = s.length();
    for(int i=0;i<slen;i++) {
        if(s.at(i) != s.at((i+1)%slen) && s.at(i) != s.at((i+2)%slen)) {
            cout << i+1;
            break;
        }
    }


    return 0;
}