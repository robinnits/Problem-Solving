#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0 ; i < n; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i< n; i++) {
            cout<<(n+1)-arr[i]<<" ";
        }cout<<'\n';
    }
    return 0;
}