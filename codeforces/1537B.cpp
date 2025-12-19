#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        long long n, m, i, j; cin >> n>>m >> i>>j;
        long long x1, y1, x2, y2;
        if(i ==1 && j == 1) {
            x1 = n;
            y1 = m;
            x2 = 1;
            y2 = m;
        }else if(i == n && j == m) {
            x1 = 1;
            y1 = 1;
            x2 = 1;
            y2 = m;
        }else{
            x1 = 1;
            y1 = 1;
            x2 = n;
            y2 = m;
        }
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<'\n';
    }
    return 0;
}