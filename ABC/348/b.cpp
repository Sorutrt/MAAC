#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n);
    rep(i,n) {
        int x,y;
        cin >> x >> y;
        p.at(i) = {x, y};
    }

    rep(i,n) {
        int point = 0;
        int ptix = p.at(i).first;
        int ptiy = p.at(i).second;
        
        for(int j=n-1; j>=0; --j) {
            int ptjx = p.at(j).first;
            int ptjy = p.at(j).second;
            int ptpx = p.at(point).first;
            int ptpy = p.at(point).second;
            if((pow((ptjx-ptix) ,2) + pow((ptjy-ptiy),2)) >= (pow((ptpx-ptix),2) + pow((ptpy-ptiy),2))) {
                point = j;
            }
        }
        cout << point+1 << '\n';
    }

    return 0;
}
