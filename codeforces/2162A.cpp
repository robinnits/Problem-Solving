#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i<n ;i ++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        cout<<arr[n-1]<<'\n';
    }
    return 0;
}