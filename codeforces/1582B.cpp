#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        long long cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            if(x == 0) cnt0++;
            else if(x == 1) cnt1++;
        }
        long long total = cnt1 * (1LL << cnt0);
        cout << total << '\n';
    }
    return 0;
}