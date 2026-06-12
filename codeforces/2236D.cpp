#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while( t-- ) {
        int n, k; cin >> n >> k;
        vector<int> arr(n);
        for(int i =0; i<n; i++) cin >> arr[i];
        vector<int> freq(n + 1, 0);
        for(int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        int target = 2e9;
        bool possible = false;
        for(int i = n; i >= 1; i--) {
            if(freq[i] > 0) {
                bool available = (target <= i + k);
                bool good_target = (!available) && (freq[i] % 2 == 1);
                if(good_target) {
                    target = i;
                } else {
                    possible = true;
                }
            }
        }
        if(possible) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}