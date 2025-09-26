#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n, k; cin >>n>>k;
        vector<int> arr(n);
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        int cntk = 0, cnt = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i<n; i++) {
            mp[arr[i]]++;
            if(arr[i]==k) cntk++;
        }
        for(int i = 0; i<k; i++) {
            if(mp[i]==0) {
                cnt++;
            }
        }
        cout<<max(cntk, cnt)<<'\n';
    }
    return 0;
}