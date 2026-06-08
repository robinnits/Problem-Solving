#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        int cnt0 =0;
        for(int i =0; i<n; i++) {
            cin>> arr[i];
            if(arr[i]==0) cnt0++;
        }
        if(cnt0 == n) cout<<0<<'\n';
        else if(n%2 == 0) {
            cout<<2<<'\n';
            cout<<1<<' '<<n<<'\n';
            cout<<1<<' '<<n<<'\n';
        }else{
            cout<<4<<'\n';
            cout<<2<<' '<<n<<'\n';
            cout<<2<<' '<<n<<'\n';
            cout<<1<<' '<<2<<'\n';
            cout<<1<<' '<<2<<'\n';
        }
    }
    return 0;
}