#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while( t-- ) {
        long long a, b; cin >> a >> b;
        if( a==b ) cout<<0<<' '<<0<<'\n';
        else {
            long long g = abs(a-b);
            long long step = min( a%g , g - a%g);
            cout<<g<<' '<<step<<'\n';            
        }
    }
    return 0;
}