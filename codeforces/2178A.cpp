#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    while( t--) {
        string s; cin >> s;
        int cnt = 0;
        for(int i =0; i<s.size(); i++) {
            if(s[i]=='Y') cnt++;
            if(cnt>1) break;
        }
        if(cnt>1) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}