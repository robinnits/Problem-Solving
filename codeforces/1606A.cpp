#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while( t-- ) {
        string s; cin >> s;
        if(s[0]==s[s.length()-1]) {
            cout<<s<<'\n';
        }else{
            s[s.length()-1]=s[0];
            cout<<s<<'\n';
        }
    }
    return 0;
}