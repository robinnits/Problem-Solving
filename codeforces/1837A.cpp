#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) {
        int x, k; cin >> x >> k;
        if(x%k==0) {
            cout<<2<<'\n';
            cout<<1<<" "<<x-1<<'\n';
        }else {
            cout<<1<<'\n';
            cout<<x<<'\n';
        }
    }
    return 0;
}