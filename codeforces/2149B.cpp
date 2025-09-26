#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >>t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());
        int temp, result = arr[1]-arr[0];
        for(int i = 0; i< n; i+=2) {
            temp = arr[i+1]-arr[i];
            if(temp>result) {
                result = temp;
            }
        }
        cout<<result<<'\n';
    }
    return 0;
}