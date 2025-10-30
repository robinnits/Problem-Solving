#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        int cnt = 0, total = 0;
        for(long long i = 1; i<100; i++) {
            if(n%i==0) {
                cnt++;
            }else if(i>n) {
                break;
            }
            else {
                total = max(cnt, total);
                cnt = 0;
            }
        }
        total = max (cnt, total);
        cout<<total<<'\n';
    }
    return 0;
}