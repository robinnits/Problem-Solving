#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while( t-- ) {
        ll n, x; cin >> n >> x;
        vector<ll> arr(n);
        for(ll i =0; i<n; i++) {
            cin>> arr[i];
        }
        ll mxsum = 0, mnsum = 0;
        for(ll i= 0; i<n; i++) {
            mxsum+=(arr[i] + x - 1) / x;
        }
        ll total = accumulate(arr.begin(), arr.end(), 0LL);
        mnsum = (total + x -1)/ x;
        cout<<mnsum<<' '<<mxsum<<'\n';
    }
    return 0;
}