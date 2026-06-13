#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        long long cnt = 0;
        map<char, int> mp;
        long long total = 0;
        for(int i=0; i<n; i++) {
            if(mp[s[i]]==0) cnt++;
            mp[s[i]]++;
            total+= cnt;
        }
        cout<<total<<'\n';
    }
    return 0;
}