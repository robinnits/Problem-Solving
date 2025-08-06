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
            if(arr[i]%2!=0) odd++;
        }
        while(q--) {
            int sum = 0;
            int l, r, k;
            cin>>l>>r>>k;
            sum = sum + k*(l-r+1);
            if(sum%2==0) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }
    return 0;
}