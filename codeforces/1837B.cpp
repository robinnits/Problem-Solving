#include<bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 1, total = 0;
        for(int i = 0; i<n-1; i++) {
            if(s[i]==s[i+1]) cnt++;
            else {
                if(total<cnt) {
                    total = cnt;
                }
                cnt = 1;
            }
        }
        cout<< max(total, cnt)+1 <<'\n';
    }
    return 0;
}