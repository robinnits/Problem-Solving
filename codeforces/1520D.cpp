#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i= 0; i<n; i++) cin >> arr[i];
        map<int, int> mp;
        long long total = 0;
        vector<int> result;
        for(int i=0; i<n; i++) {
            if(mp[arr[i] - i] == 0) result.push_back(arr[i] - i);
            mp[arr[i] - i]++;
        }
        int size= result.size();
        for(int i=0; i<size; i++) {
            if(mp[result[i]] == 2) total++;
            else if(mp[result[i]] > 2) {
                long long x = mp[result[i]];
                total+= (x*(x-1)) / 2;
            }
        }
        cout<<total<<'\n';
    }
    return 0;
}