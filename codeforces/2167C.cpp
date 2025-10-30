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
        int cnt = 0;
        for(int i = 0; i< n; i++) {
            if(arr[i]%2==0) {
                cnt++;
            }
        }
        if(cnt!= 0 && cnt!=n) {
            sort(arr.begin(), arr.end());
            for(int i : arr) {
                cout<<i<<" ";
            }cout<<endl;
        }else{
            for(int i : arr) {
                cout<<i<<" ";
            }cout<<endl;
        }
    }
    return 0;
}