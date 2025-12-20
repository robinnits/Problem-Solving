#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        long long n, k; cin >> n>>k;
        vector<long long> arr(n);
        for(long long i = 0;i<n; i++) {
            cin>>arr[i];
        }
        map<long long, long long> mp;
        for(long long i = 0; i<n ; i++) {
            mp[arr[i]]++;
        }
        bool check = false;
        for(long long i= 0; i<n; i++) {
            if(mp[arr[i]-k]>=1 || mp[arr[i]+k]>=1) {
                check = true;
            }
        }
        if(check) {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}