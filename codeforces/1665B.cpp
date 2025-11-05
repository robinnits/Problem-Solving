#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t --) {
        int n ; cin >> n;
        vector<long long> arr(n);
        for(int i = 0; i< n;i ++) {
            cin>> arr[i];
        }
        map<long long, long long> mp;
        for(auto it: arr) {
            mp[it]++;
        }
        long long maxcnt = INT_MIN;
        for(int i= 0; i<n; i++) {
            maxcnt = max( maxcnt, mp[arr[i]]);
        }
        int swapcnt = n-maxcnt;
        int clonecnt = 0;
        while(maxcnt < n) {
            maxcnt*=2;
            clonecnt++;
        }
        cout<<(swapcnt + clonecnt )<<'\n';
    }
    return 0;
}