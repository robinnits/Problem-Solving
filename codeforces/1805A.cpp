#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin >> arr[i];
        int result = arr[0];
        for(int i =1; i<n; i++) result^=arr[i];
        if( n%2==0 && result == 0) cout<<7<<'\n';
        else if( n%2==0 && result != 0) cout<<-1<<'\n';
        else cout<<result<<'\n'; 
    }
    return 0;
}