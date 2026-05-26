#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ; cin >> t;
    while(t--) {
        string s; cin >> s;
        int n = s.length();
        int cnt0 = 0;
        int cnt1 = 0;
        for(int i = 0; i<n; i++) {
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }
        bool check = false;
        int cnt = min(cnt0, cnt1);
        if(cnt%2 != 0) check = true;
        if(check) cout<<"DA"<<'\n';
        else cout<<"NET"<<'\n';
    }
    return 0;
}