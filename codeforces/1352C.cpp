#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while( t-- ) {
        long long n, k; cin >> n >> k;
        long long i = k/(n-1);
        long long ans = n*i -1;
        long long rem = k%(n-1);
        if(rem != 0) ans+= rem+1;
        cout<<ans<<'\n';
    }
    return 0;
}