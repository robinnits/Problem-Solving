#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    string find = "hello";
    int j = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == find[j]) j++;
        if(j == 5) break;
    }
    if(j == 5) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}