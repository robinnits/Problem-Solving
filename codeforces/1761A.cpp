#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n, a, b; cin >> n >> a >> b;
        if((n==a && a==b) || (a+b+2<=n)) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}