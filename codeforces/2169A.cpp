#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        long long n, a; cin >> n >> a;
        vector<long long> v(n);
        for(long long i = 0; i<n; i++) {
            cin>>v[i];
        }
        long long small = 0;
        long long big = 0;
        for(long long i = 0; i < n; i++) {
            if (v[i] < a) {
                small++;
            } else if (v[i] > a) {
                big++;
            }
        }
        if (small >= big) {
            cout << a-1 << '\n'; 
        } else {
            cout << a + 1 << '\n';
        }
    }
    return 0;
}