#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while ( t-- ) {
        int n, k; cin >> n >> k;
        vector<long long> arr(n*k);
        for(int i =0 ;i<n*k; i++) {
            cin >> arr[i];
        }
        long long median = 0;
        int mid = n/2 +1;
        int diff = n -mid;
        int i = diff*k;
        while(i<n*k) {
            median+=arr[i];
            i+=mid;
        }
        cout<<median<<'\n';
    }
    return 0;
}