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
        int total = INT_MAX;
        int cnt = 0;
        for(int i =0; i<n; i++) {
            if(arr[i] % 2 == 0) cnt++;
            int temp = (k - arr[i]%k) % k;
            total = min (temp, total);
        }
        if(k == 4) {
            if(cnt>=2) total = 0;
            else if(cnt == 1) total = min(total, 1);
            else total = min(total, 2);
        }
        cout<<total<<'\n';
    }
    return 0;
}