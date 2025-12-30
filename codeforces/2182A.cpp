#include<bits/stdc++.h>
using namespace std;

bool has2025(const string &s) {
    return s.find("2025") != string::npos;
}

bool has2026(const string &s) {
    return s.find("2026") != string::npos;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int total = 0;
        if(has2025(s) && !has2026(s)) {
            total = 1;
        }else{
            total = 0;
        }
        cout<<total<<'\n';
    }
    return 0;
}