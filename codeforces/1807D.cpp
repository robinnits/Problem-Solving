#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, q;
        cin>>n>>q;
        int arr[n];
        int odd=0, even = 0;
        for(int i = 0; i<n; i++) {
            cin>>arr[i];
        }
        int sums[n];
        sums[0] = arr[0];
        for(int i = 1; i<n; i++) {
            sums[i] = arr[i] +sums[i-1];
        }
        while(q--) {
            int sum = 0;
            int l, r, k;
            cin>>l>>r>>k;
            if(l>=2) {
                sum = sums[l-2] + k*(r-l+1) + (sums[n-1]-sums[r-1]);
            }else {
                sum = k*(r-l+1) + (sums[n-1]-sums[r-1]);
            }
            if(sum%2==0) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}