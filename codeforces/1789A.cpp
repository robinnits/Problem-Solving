#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    int rem;
    while(b!=0) {
        rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i= 0; i<n; i++) {
            cin>>arr[i];
        }
        int cnt = 0;
        for(int i = 0; i< n-1; i++) {
            for(int j= i+1; j<n; j++) {
                int a = arr[i];
                int b = arr[j];
                int result = gcd(max(a, b), min(a, b));
                if(result<=2) {
                    cnt++;
                    break;
                }
            }
        }
        if(cnt>0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}